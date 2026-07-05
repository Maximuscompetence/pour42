/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 13:03:13 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/05 14:42:53 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int**	cretab (void)
{
	int	i;
	


	i = 0;	
	int	**tab1;
	
	tab1 = malloc(sizeof *tab1 * 4);
	tab1[0] = malloc(sizeof **tab1 * 4);
	tab1[1] = malloc(sizeof **tab1 * 4);
	tab1[2] = malloc(sizeof **tab1 * 4);
	tab1[3] = malloc(sizeof **tab1 * 4);
	return tab1;
}

// Vérifie si le nombre d'éléments "visibles" correspond à la cible.
 //Le premier paramètre accepte désormais n'importe quel pointeur d'entiers (int*).
int	check(int *tab, int cible)
{
	int cpt = 1;
	int current = tab[0];
	int i = 1; 

	while (i < 4)
	{
	if (tab[i] > current)
	{
		cpt++;
		current = tab[i];	
	}
	i++;
	}
	printf("Visible: %d | Cible: %d\n", cpt, cible);
	return (cible == cpt);
}

//Extrait une colonne d'un tableau 2D.
// Pensez à libérer (free) le pointeur retourné après usage.
int*	extractCol(int **tab, int cible_colonne) 
{
	int	i;
	int* colonne_extraite = malloc(4 * sizeof(int));

	i = 0;
	if (colonne_extraite == NULL) 
	{
	return NULL; // Sécurité si le malloc échoue
	}
	while (i < 4) 
	{
	colonne_extraite[i] = tab[i][cible_colonne];
	i++;
	}

	return colonne_extraite;
}

int	main()
{
	// Paramètres
	int row1left = 4; int row2left = 3; int row3left = 2; int row4left = 1;
	int col1top = 4;  int col2top = 3;  int col3top = 2;  int col4top = 1;

	// Création du tableau
	int **tableau;
	tableau = cretab();
	

	// Remplissage des valeurs
	tableau[0][0] = 4; tableau[1][0] = 2; tableau[2][0] = 3; tableau[3][0] = 1;
	tableau[0][1] = 2; tableau[1][1] = 2; tableau[2][1] = 4; tableau[3][1] = 1;
	tableau[0][2] = 1; tableau[1][2] = 1; tableau[2][2] = 2; tableau[3][2] = 2;
	tableau[0][3] = 4; tableau[1][3] = 2; tableau[2][3] = 1; tableau[3][3] = 3;

	int resultat[16];

	// Vérification des lignes (Pas de fuite ici car tableau[i] est statique)
	resultat[0] = check(tableau[0], row1left);
	resultat[1] = check(tableau[1], row2left);
	resultat[2] = check(tableau[2], row3left);
	resultat[3] = check(tableau[3], row4left);

	// Vérification des colonnes avec libération de la mémoire (free)
	int*	col;
	int	i;
	i = 0;
	col = extractCol(tableau, 0); resultat[4] = check(col, col1top); free(col);
	col = extractCol(tableau, 1); resultat[5] = check(col, col2top); free(col);
	col = extractCol(tableau, 2); resultat[6] = check(col, col3top); free(col);
	col = extractCol(tableau, 3); resultat[7] = check(col, col4top); free(col);

	// Affichage des résultats
	printf("\n--- Resultats Finaux ---\n");
	while (i < 8)
	{
		printf("Check%d = %d, ", i, resultat[i]);
		i++;
	}
	printf("\n");

	// Libération de la mémoire du tableau pour éviter les fuites
	free(tableau[0]);
	free(tableau[1]);
	free(tableau[2]);
	free(tableau[3]);
	free(tableau);
	return 0;
}

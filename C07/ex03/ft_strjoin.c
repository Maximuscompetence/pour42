#include <stdio.h>
#include <stdlib.h>

int cont(char **tab, int taille, char *escp)
{
	int res = 0;
	int i = 0;
	int x;

	while (tab[i])
	{
	x = 0;
	while (tab[i][x])
	{
		res++;
		x++;
	}
	i++;
	}
	i = 0;
	while (escp[i])
	{
		i++;
	}
	i--;
	i = i * taille;
	res = res + i;
	printf ("%d",res);
	return (res);
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*chain;
	int	n;
	
	n = cont (strs, size, sep);
	chain = malloc(sizeof * chain * n);
	if (chain == NULL)
		return (0);
	
		return (chain);
}

int	main(int argc, char *argv[])
{
	char	*env[] = {"aaa","bbb","ccc","ddd",NULL};
	char	*result;
	result = ft_strjoin(5,env,".");
	return (0);
}
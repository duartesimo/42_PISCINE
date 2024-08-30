#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc(sizeof(struct s_stock_str) * (argc + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		array[i].size = ft_strlen(argv[i]);
		array[i].str = argv[i];
		array[i].copy = ft_strdup(argv[i]);
		i++;
	}
	array[i].str = 0;
	array[i].size = 0;
	array[i].copy = 0;
	return (array);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("Original: %s\n", structs[i].str);
		printf("    Copy: %s\n", structs[i].copy);
		printf("     Len: %d\n", structs[i].size);
		i++;
	}
}
*/
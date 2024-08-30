int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab [i + 1]) > 0)
			asc = 0;
		if ((*f)(tab[i], tab [i + 1]) < 0)
			desc = 0;
		i++;
	}
	if (desc || asc)
		return (1);
	else
		return (0);
}

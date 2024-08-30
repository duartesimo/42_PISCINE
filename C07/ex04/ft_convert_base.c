#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *nbrf);
int		lenght_nbr(int nbr, char *base, int len);

int	valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	skip_spaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	res;
	int	nb2;
	int	base_lenght;

	res = 0;
	i = 0;
	base_lenght = valid_base(base);
	if (base_lenght < 2)
		return (0);
	count = skip_spaces(str, &i);
	nb2 = nb_base(str[i], base);
	while (nb2 != -1)
	{
		res = (res * base_lenght) + nb2;
		i++;
		nb2 = nb_base(str[i], base);
	}
	return (res *= count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*final_num;
	int		num1;
	int		num1_len;

	if (valid_base(base_to) == 0 || valid_base(base_from) == 0)
		return (0);
	num1 = ft_atoi_base(nbr, base_from);
	num1_len = lenght_nbr(num1, base_to, 0);
	final_num = (char *)malloc(sizeof(char) * (num1_len + 1));
	if (!final_num)
		return (0);
	ft_putnbr_base(num1, base_to, final_num);
	final_num[num1_len] = '\0';
	return (final_num);
}

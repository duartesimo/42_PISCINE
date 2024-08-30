int	valid_base_length(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	skip_spaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	num_base(char str, char *base)
{
	int	num;

	num = 0;
	while (base[num])
	{
		if (str == base[num])
			return (num);
		num++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		res;
	int		sign;
	int		num_b;
	int		len_base;

	len_base = valid_base_length(base);
	if (len_base < 2)
		return (0);
	i = 0;
	res = 0;
	sign = skip_spaces(str, &i);
	num_b = num_base(str[i], base);
	while (num_b != -1)
	{
		res = res * len_base + num_b;
		i++;
		num_b = num_base(str[i], base);
	}
	return (res *= sign);
}

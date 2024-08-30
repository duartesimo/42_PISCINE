char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev;

	i = 0;
	prev = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (prev)
				str[i] -= 32;
			prev = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			prev = 0;
		else
			prev = 1;
		i++;
	}
	return (str);
}

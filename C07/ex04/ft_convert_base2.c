int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	lenght_nbr(int nbr, char *base, int len)
{
	int				base_lenght;
	unsigned int	nb;

	base_lenght = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		len++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		len++;
	}
	len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base, char *nbrf)
{
	int		base_len;
	long	nb;
	int		i;
	int		len_nbrf;

	base_len = ft_strlen(base);
	len_nbrf = lenght_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= base_len)
	{
		nbrf[len_nbrf] = base[nb % base_len];
		nb /= base_len;
		len_nbrf--;
	}
	if (nb < base_len)
		nbrf[i] = base[nb];
}

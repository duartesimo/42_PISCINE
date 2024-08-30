int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power < 1)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

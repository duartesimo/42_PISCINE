#include "ft.h"

int	operator(int x, char *c, int y)
{
	int	res;
	int	(*operator[5])(int, int);

	operator[0] = &add;
	operator[1] = &sub;
	operator[2] = &mul;
	operator[3] = &div;
	operator[4] = &mod;
	res = 1;
	if (c[0] == '+')
		res = operator[0](x, y);
	else if (c[0] == '-')
		res = operator[1](x, y);
	else if (c[0] == '*')
		res = operator[2](x, y);
	else if (c[0] == '/')
		res = operator[3](x, y);
	else if (c[0] == '%')
		res = operator[4](x, y);
	return (res);
}

void	do_op(char *num1, char *c, char *num2)
{
	int	i;
	int	x;
	int	y;
	int	res;

	i = 0;
	res = 1;
	x = ft_atoi(num1);
	y = ft_atoi(num2);
	if (!(c[0] == '+' || c[0] == '-'
			|| c[0] == '/' || c[0] == '%' || c[0] == '*'))
		write (1, "0", 1);
	else if (c[0] == '/' && y == 0)
		write (1, "Stop : division by zero", 23);
	else if (c[0] == '%' && y == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		res *= (operator(x, c, y));
		ft_putnbr(res);
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int num);
void	do_op(char *num1, char *op, char *num2);
int		ft_atoi(char *str);
int		operator(int a, char *c, int b);
int		add(int num1, int num2);
int		sub(int num1, int num2);
int		mul(int num1, int num2); 
int		div(int num1, int num2);
int		mod(int num1, int num2);

#endif

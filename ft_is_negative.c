/* Displays N or P depending on the integer's sign entered as a parameter */
/* TO PUT LIMIT FOR INTEGER NUMBERS RANGE */
#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
	write(1, "\n", 1);
}

int	main(void)
{
	int n;
	n = -1763638728127378;
	ft_is_negative(n);
	return(0);
}

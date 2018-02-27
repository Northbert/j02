#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char i,j,k;
	i = '0';
	j = i + 1;
	k = j + 1;

	while (i <= '9')
	{
		j = i + 1;
		while(j < '9')
		{
			k = j + 1;
			while(k <= '9')
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(k);
					ft_putchar(' ');
					k = k + 1;
				}
			j = j+ 1;
		}
		i = i + 1;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return(0);
}

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char i,j,x,y;

	i = '0';

	while(i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			x = i;
			while (x <= '9')
			{
				y = j + 1;
				while(y <= '9')
				{
					
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(' ');
					ft_putchar(x);
					ft_putchar(y);
					
					if(i != '9' || j != '8' || x != '9' || y != '9')
					{
					ft_putchar(',');
					ft_putchar(' ');
					}
					else
					break;
					y = y + 1;
				}
				x = x + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}

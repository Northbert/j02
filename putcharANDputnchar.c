/* this is the 3rd example fom jour 02 */

#include	<unistd.h>
#include	<stdio.h>

int	ft_putchar (char c)
{
	write(1, &c, 1);
	return(0);
}

/*int	ft_nputchar(char c, int n)
{
	int i;

	i = 0;
	while (1 < 3)
		{
			ft_putchar(c);
			i = i + 1;
		}
	return(0);
}
*/
int	main ()
{
	int i,n;

	n = 3;
	i = 0;
	
	while (i < n)
	{
		ft_putchar('R');
		i = i + 1;
	}

	return(0);
}	

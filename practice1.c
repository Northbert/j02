/*this is the example from the first video of j02*/

#include	<unistd.h>

int	main()
{
	write(1, "a", 1);
	write(1, "\n", 1);
	write(1, "a\n", 2);
	return(0);
}

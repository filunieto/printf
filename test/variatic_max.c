#include <stdarg.h>
#include <stdio.h>

int	max(int num_arg, ...);

int	main(void)
{
	max(4, 4, 8, 7 , 15);
	return (0);
}

int	max(int num_arg, ...)
{
	va_list	ap;
	int	i;
	int	j;

	va_start(ap, num_arg);
	for (i = 0; i < num_arg; i++)
	{
		j = va_arg(ap, int);
		printf ("%i\n", j);
	}
	va_end(ap);
	return (0);
}

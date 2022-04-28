#include <stdarg.h>
#include <stdio.h>

double average(int count, ...)
{
	va_list ap;
	int j;
	double sum;

	sum = 0;
	va_start(ap, count);
	for (j = 0; j < count; j++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return sum / count;
}

int	main(void)
{
	printf("%f\n", average(4, 1, 2, 3, 6));
	return	(0);
}
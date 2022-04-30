#include <stdio.h>

#define PALABRA "cdi"
int main(void)
{
	int	i;

	i = printf("string : %s, charcter: %c, numero: %i   \n", PALABRA, 'd', 45);
	printf("%i\n", i);
	return (0);
}
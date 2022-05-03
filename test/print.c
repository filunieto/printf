#include <stdio.h>

// #define FLAGS2 "cspdiouxXf%"
#define PALABRA "cdi"
int main(void)
{
	int	i;
	int	number;

	number = 255;
	i = printf(" string : %s\n charcter: %c\n numero int: %i\n numero d: %d\n pointer: %p\n ", "PALABRA", 'd',number,  number, &number);
	i += printf(" octal : %o\n unsigned: %u\n hexadecimal: %x\n HEXADECIMAL: %X \n ", number, number, number, number);
	i += printf(" float : %f\n", 2.8);
	printf("numero total de caracetres impresos %i\n", i);
	return (0);
}
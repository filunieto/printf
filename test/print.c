#include <stdio.h>

// #define FLAGS2 "cspdiouxXf%"
#define PALABRA "PALbra"
int main(void)
{
	int	i = 0;
	int	number;
	char caracter;


	number = -256;
	caracter = 'v';
	// i = printf(" string : %s\n charcter: %c\n numero int: %i\n numero d: %d\n pointer: %p\n ", "PALABRA", 'd',number,  number, &number);
	//i += printf(" octal : %o\n unsigned: %u\n hexadecimal: %#x\n HEXADECIMAL: %#X \n ", number, number, number, number);
	//i += printf(" float : %f\n", 2.8);
	i = printf("%010i", 123456789);
	printf("\nnumero total de caracetres impresos %i\n", i);
	i = printf("%-10s", PALABRA);
	printf("\nnumero total de caracetres impresos %i\n", i);
	i = printf("%10c", caracter);
	printf("\nnumero total de caracetres impresos %i\n", i);
	//i = printf("%#x", 45854);
	//printf("\nnumero total de caracetres impresos %i\n", i);
	// i = printf("%2$*1$d \n", 2, 56445);
	// printf("\nnumero total de caracetres impresos %i\n", i);
	// i = printf("%2$*1$d \n", 3, 56445);
	// printf("\nnumero total de caracetres impresos %i\n", i);
	//printf("%5.3d \n", 42);
	return (0);
}

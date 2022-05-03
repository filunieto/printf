#include "printf.h"

// seguir a;adiendo los casos , y escribiendo directamente en lugar de usar el buffer
int print (char * str, ...)
{
	va_list ap;
	int i = 0, j=0;
	va_start(ap, str);
	char	c;
	char *temp;

	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				c = (char)va_arg(ap, int);
				write (1, &c, 1);
				j++;
			}
			else if (str[i] == 'd')
			{

				temp = ft_itoa(va_arg(ap, int));
				write (1, temp, 15);
				free(temp);
				j++;
			}
			else if (str[i] == '%')
			{
				write(1, "%%", 1);
				j++;
			}
			else
			{
				j = j + write(1, "error: invalid conversion specifier\n", 37);
				return (0);
			}
		}
     	else 
	    {
	       	write(1, &str[i], 1);
	       	j++;
	    }
	    i++;
	}
    va_end(ap);
    return j;
}

int	main(void)
{
	char	*str;
	int	i;
	char m = 'Y';
	char n = 'W';
	int number1 = -256;
	int number2 = -1548;

	str = "mi mamam me mimo %c porcentaje %% y %c  otro %d y otro %d";
	i = print (str, m, n, number1, number2);
	write(1, "\n", 1);
	printf("%i\n", i);
	return (0);
}
#include "printf.h"

// seguir a;adiendo los casos , y escribiendo directamente en lugar de usar el buffer
int print (char * str, ...)
{
	va_list ap;
	int i = 0, j=0;
	char buff[100]={0};
	va_start(ap, str);

	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				buff[j] = (char)va_arg(ap, int);
				j++;
			}
			else if (str[i] == 'd')
			{
				buff[j] = (char)va_arg(ap, int);
				j++;
			}
			else if (str[i] == '%')
			{
				write(1, "%%", 1);
				j++;
			}
			else
			{
				write(1, "error: invalid conversion specifier\n", 37);
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

	str = "mi mamam me mimo porcentaje %% y mas";
	i = print (str, m);
	write(1, "\n", 1);
	printf("%i\n", i);
	return (0);
}
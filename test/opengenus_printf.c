#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/*
https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/#:~:text=Printf%20working%20principle&text=User%20supply%20a%20string%20and,character%20to%20the%20output%20string
*/
int print (char *str, ...)
{
	va_list ap;
	int	i = 0;
	int	j = 0;
	char buff[100];
	char tmp[20];
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
			else if (str[i] == '%')
			{
				buff[j] = '%';
				j++;
			}
			else
			{
				write(1, "error: invalid conversion specifier\n", 37);
			}
		}
		else
		{
			buff[j] = str[i];
			j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout); 
	va_end(ap);
	return (j);
}

int	main(void)
{
	char	*str;
	int	i;

	str = "mi mamam me mima";
	print (str);
	return (0);
}
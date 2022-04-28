#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
 

int print (char * str, ...)
{
	va_list vl;
	int i = 0, j=0;
	char buff[100]={0};
	va_start( vl, str );

	while (str && str[i])
	{
		if(str[i] == '%')
		{
 		    i++;
 		    switch (str[i]) 
 		    {
	 		    case 'c': 
	 		    {
	 		        buff[j] = (char)va_arg( vl, int );
	 		        j++;
	 		        break;
	 		    }
        	}
     	} 
     	else 
	    {
	       	buff[j] =str[i];
	       	j++;
	    }
	    i++;
	} 
    write(1, buff, j); 
    va_end(vl);
    return j;
}
 
int	main(void)
{
	char	*str;
	int	i;
	char m = 'Y';

	str = "mi mamam me mima %c";
	i = print (str, m);
	write(1, "\n", 1);
	printf("%i\n", i);
	return (0);
}
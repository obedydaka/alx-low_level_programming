#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - This function prints anything passed to it
 * @format: Parameters passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s;

	va_start(ap, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || 
		format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}

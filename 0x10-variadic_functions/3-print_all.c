#include "variadic_functions.h"

/**
 * print_all - ƒ() that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list type; /* declare argument pointer */
	char *string; /* pointer for string case */
	int mark = 0, i = 0, flag = 0;

	va_start(type, format); /* initialize argument pointer */
	while (format != NULL && format[mark] != '\0')
		mark++;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(type, int));
			break;
			case 'i':
				printf("%i", va_arg(type, int));
			break;
			case 'f':
				printf("%f", va_arg(type, double));
			break;
			case 's':
				string = va_arg(type, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
			break;
			default:
				flag = 1;
			break;
		}
		if (i < mark && flag != 1)
			printf("%c%c", 44, 32);
		flag = 0;
	}
	va_end(type);
	printf("%c", 10);
}

#include "variadic_functions.h"
/**
 * prints-number - prints all parameter given to it 
 * @seperator: is the string to be printed between numbers 
 * @n: number of args passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i;
	va_list params;

	va_start (params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
		
			if (seperator != NULL)
				printf("%d%s", va_arg(params, int), separator);
			else
				printf("%d", va_arg(params, int));
			}
			else
			{
				printf("%d", va_arg(params, int)); 
			}
		}
	}
	printf("\n");
	va_end(params);
}



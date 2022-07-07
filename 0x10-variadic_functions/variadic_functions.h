#ifndef _VAR_FUNCS_
#define _VAR_FUNCS_
#include <stdarg.h>
/**
 * struct print_convert_variable - structure to hold function and char key
 * @type: abbreviation for type, c=char, f=float, i=int, s=string
 * @f: pointer to function for proper print statement
 * Description: key:value, char:function, e.g: 'c':_print_char
 */
typedef struct print_convert_variable
{
	char type;
	void (*f)(va_list *);
}
conv_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(int);
#endif

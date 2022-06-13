#include "main.h"
#include <string.h>
/**
* _strlen -> function to get the length of a string
* @s: string pointer to passed to this function
* Return: returns length of the string
*/
int _strlen(char *s)
{
	int length;

	for(; *s != '\0'; s++)
	{
		length += 1;
	}
	return (length);
}

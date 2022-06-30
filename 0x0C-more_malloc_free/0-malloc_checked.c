#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

/**
 * malloc_checked - allocating memory using malloc in function
 * Return : pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == null)
	{
		exit(98);
	}
	return (pointer);
}
	

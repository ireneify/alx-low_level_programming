#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name:char
 * @age:float
 * @owner: char
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
	char *name2;
	char *owner2;
	int k, m, n, o;
	struct dog *luna;
	
	luna = malloc(sizeof(struct dog));
	if (luna == NULL)
		return (NULL);
	for (k = 0; *(name + k) != '\0'; k++)
		;
	for (m = 0; *(owner + m) != '\0'; m++)
		;
	name2 = malloc(k + 1);
	
	if (name2 != NULL)
	{
		for (n = 0; n <= k; n++)
			*(name2 + n) = *(name + n);
	}
	else
	{
		free(luna);
		return (NULL);
	}
	owner2 = malloc(k + 1);
	if (owner2 != NULL)
	{
		for (o = 0; o <= m; o++)
			*(owner2 + o) = *(owner + o);
	}
	else
	{
		free(name2);
		free(luna);
		return (NULL);
	}
	luna->name = name2;
	luna->age = age;
	luna->owner = owner2;
	return (luna);
}

#include <stdio.h>
#include <stdlib.h>
/**
* main -> this is a function to print its name
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int result = 0, num, a, b, c;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}

		}
	}

	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}

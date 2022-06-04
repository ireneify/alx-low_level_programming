#include <stdio.h>
/**
 * print the alphabet in lowercase,  q and e not included
 * Return: always 0 sucess
 */

	int main(void)
{
		int ch;
	for( ch = 'a'; ch <= 'z'; ch++)
        if( ch != 'q' && ch != 'e' )
	{
		putchar(ch);
	}
	putchar(10);
	return (10);
}

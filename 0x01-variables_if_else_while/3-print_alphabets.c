#include <stdio.h>
/**
 * main -> assign a random number to the variable n each time it is exercuted
 * and print the last digit of the number stored in the variable n
 * Return: Always 0 
int mode(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
putchar(10);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
putchar(10); /*this is ascii code for newline*/
}

return (0);
}

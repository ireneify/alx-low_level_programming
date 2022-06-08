#include "main.h"
/**
* jack_bauer -> prints 24 hours
*/
void jack_bauer(void)
{
	int k, l;

	for (k = 0; k < 24; k++)
	{
		for (l = 0; l < 60; l++)
		{
			if (k < 10)
			{
				_putchar('0');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (l < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(l + '0');
			}
			else if (l >= 10)
			{
				_putchar(':');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
			_putchar('\n');
		}

	}
}

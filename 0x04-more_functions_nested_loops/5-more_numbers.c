#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:voi
 */

void more_numbers(void)
{
	int c, n;


	while (i < 10)
	{
		for (n = 0; n < 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			else
			{
				_putchar('0' + c);
			}
		}

			_putchar('\n');
			c++;
	}

}

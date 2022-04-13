#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 *
 * Return: 0 when successful
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)

	{

		char c;


		for (c = 'a'; c <= 'z'; c++)
		{

			_putchar(c);
		}
		_putchar('\n');

	}
}

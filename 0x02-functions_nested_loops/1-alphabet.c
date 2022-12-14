#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char q = 'a';
	while (q <= 'z')
	{
		_putchar(q );
		q++;
	}

	_putchar('\n');
}

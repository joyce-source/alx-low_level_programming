#include "main.h"

/**
 * print_numbers - print num from 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	char r;

	for (r = '0'; r <= '9'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}

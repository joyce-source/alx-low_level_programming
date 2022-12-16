#include "main.h"

/**
 * print_numbers - print num from 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}

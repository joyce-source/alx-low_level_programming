#include "main.h"

/**
 * print_numbers - checks for a digit 0 through 9
 *
 * Return: Always 0 
 */
void print_numbers(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}

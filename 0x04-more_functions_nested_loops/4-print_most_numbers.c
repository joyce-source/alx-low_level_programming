#include "main.h"
/**
 * print_most_numbers - prints number between 0 - 9
 * (neither 2 nor 4)
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if (ch != 2 && ch != 4)
		{
			_putchar(ch + '0');
		}
	}
	_putchar('\n');
}

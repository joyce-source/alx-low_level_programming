#include "main.h"
/**
 * print_sign - checks for the sign of a number
 *
 * @n: is the character to check
 * Return: 1 if character is greater than zero
 * 0 if character is zero
 *-1 if character is less than zero
 */
int print_sign(int n)
{
	if (n <= 0)
	{

		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

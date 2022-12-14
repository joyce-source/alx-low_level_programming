#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @t: the integer to check for the last digit
 * Return: 0
 */
int print_last_digit(int t)
{
	int ld = t % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}

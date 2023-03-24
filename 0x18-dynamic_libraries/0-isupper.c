#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @d: input character
 * Return: 1 f is an uppercase character, 0 if not
 */
int _isupper(int d)
{
	if (d >= 65 && d <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

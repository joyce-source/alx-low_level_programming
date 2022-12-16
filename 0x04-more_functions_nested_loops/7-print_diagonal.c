#include "main.h"

/**
  *print_diagonal - draws a diagonal line
  *@n: number of times\ is printed
  *end with new line
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int t, u;

	for (t = 0; t < n; t++)
	for (u = 1; u < n; u++)
			if (u == t)
				_putchar('\\');
					else if (u < t)
					_putchar(' ');
	}
	_putchar('\n');
}

#include "main.h"

/**
  *print_line - draws a straight line
  *@n: the number of times _ to be printed
  *end in new line
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

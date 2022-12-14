#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -prints number all number to 98
 * @y: the starting number
 */
void print_to_98(int y)
{
	if (y >= 98)
	{
		while (y > 98)
			printf("%d, ", y--);
		printf("%d\n", y);
	}
	else
	{
		while (y < 98)
			printf("%d, ", y++);
		printf("%d\n", y);
	}
}

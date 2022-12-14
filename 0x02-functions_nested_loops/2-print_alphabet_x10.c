#include "main.h"
/**
 *void print_alphabet_x10 -Entry point
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
char w =0;

	while (w <= 10)
	{
		j = 'a';
		while (j <= 'z')

		{
		_putchar(j);
		j++;
		}
		_putchar('\n');
		w++;
	}

	return (0);
}


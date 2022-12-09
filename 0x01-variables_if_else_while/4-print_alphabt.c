#include <stdio.h>
/**
 * main-entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char r;


	for (r = 'a'; r <= 'z'; r++)
	{
		if (r != 'e' && r != 'q')
			putchar(r);
	}
	putchar('\n');
	return (0);
}

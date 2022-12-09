#include <stdio.h>
/**
 * main-entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char r;

	r = 'a';
	while
		(r <= 'z') {
			if ((r != 'q' && r <= 'e') && r <= 'z')
				putchar(r);
			r++;
		}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main-entry point
 *
 */

int main(void)
{
	char e;

	int q;

	e = 'a';
	q = 0;
	while
		(q < 10) {
			putchar(q + '0');
			q++;
		}
	while
		(e <= 'f') {
			putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}

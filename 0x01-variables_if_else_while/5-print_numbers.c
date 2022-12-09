#include <stdio.h>
/**
 * main- entry point
 * print single digit
 * Return: always 0 (success)
 */
int main(void)
{
	int da;

	for (da = 0; da <= 10; da++)
		printf("%d", da);
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabet in lower then Upper case
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		char upper = alpha - 'a' + 'A';
		putchar(alpha);
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

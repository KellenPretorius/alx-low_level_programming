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
	char upper = alpha - 'a' + 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

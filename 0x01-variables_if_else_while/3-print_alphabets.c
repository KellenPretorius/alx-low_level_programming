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
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

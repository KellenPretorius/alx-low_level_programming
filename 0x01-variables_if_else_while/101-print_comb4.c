#include <stdio.h>

/**
 * main - prints all combination of triple digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig, it, s;

	for (dig = '0'; dig <= '9'; dig++)
	{
		for (it = '0'; it <= '9'; it++)
		{
		        for (s = '0'; s <= '9'; s++)
			{
				if (s > it && it > dig)
				{
					putchar(dig);
					putchar(it);
					putchar(s);

					if (!(dig == '5' && it == '5' && s == '6'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

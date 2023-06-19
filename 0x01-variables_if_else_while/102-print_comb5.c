#include <stdio.h>

/**
 * main - combinations of 2 2 digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig1, dig2, dig3, dig4;
	int count = 0;

	for (dig1 = '0'; dig1 <='9')
	{
		for (dig2 = '0'; dig2 <= '9'; dig2++)
		{
			for (dig3 = '0'; dig3 <= '9'; dig3++)
			{
				for (dig4 = '0'; dig4 <= '9'; dig4++)
				{
					if ((dig1 > dig3) || (dig1 == dig3 && dig2 >= dig4))
					{
						continue;
					}

					if (count > 0)
					{
						putchar(',');
						putchar(' ');
					}

					putchar(dig1);
					putchar(dig2);
					putchar(' ');
					putchar(dig3);
					putchar(dig4);
					count++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
				for (d = 48; d <= 57; d++)
				{
					if (((c + d) > (c + b) && c >= a) || a < c)
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

					if (a + b + c + d == 227 && a == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}

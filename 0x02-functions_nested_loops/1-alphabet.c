#include "main.h"
/**
 * print_alphabet - Prenting small letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

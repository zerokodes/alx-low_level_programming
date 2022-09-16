#include "main.h"
/**
 * print_triangle - print triangles using '#'
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (k = size - 1 - i; k > 0; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
}

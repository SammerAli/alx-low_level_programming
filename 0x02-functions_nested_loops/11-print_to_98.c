#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbs to 98
 *@n: start number
 * Return: always 0
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a <= 97)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
	else if (n > 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b >= 99)
			{
				printf("%d, ", b);
			}
			else if (b == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}

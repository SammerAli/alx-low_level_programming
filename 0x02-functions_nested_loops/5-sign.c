#include "main.h"
/**
 * print_sign - print sign
 *
 *@n: char to be checked
 *
 * Return: 1 for +ve, -1 for -vw and 0 for else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

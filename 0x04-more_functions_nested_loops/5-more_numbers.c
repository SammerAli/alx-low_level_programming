#include "main.h"
/**
 * more_numbers - print from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 0;

		while (c < 15)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}

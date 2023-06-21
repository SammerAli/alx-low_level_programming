#include <stdio.h>
/**
 * main - print first fabionacci numbers 50
 * Return: always 0
 */
int main(void)
{
	long int i, a, b, round;

	a = 1;
	b = 2;


	for (i = 1; i <= 50; i++)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}
		round = a + b;
		a = b;
		b = round;
	}

	return (0);
}

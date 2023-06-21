#include <stdio.h>
/**
 * main - add sums of 3 and 5
 * Return: always 0
 */
int main(void)
{
	unsigned long int s3, s5, ss;
	int i;

	s3 = 0;
	s5 = 0;
	ss = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			s3 += i;
		}
		else if ((i % 5) == 0)
		{
			s5 += i;
		}
	}
	ss = s3 + s5;
	printf("%lu\n", ss);
	return (0);
}

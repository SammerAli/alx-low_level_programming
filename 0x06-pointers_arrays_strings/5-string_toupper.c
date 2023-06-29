#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letter
 * of a string to uppercase.
 *@a: check value if upper or not.
 * Return: a.
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	return (a);
}

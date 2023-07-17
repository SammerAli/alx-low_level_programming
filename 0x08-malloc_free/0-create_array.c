#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array,
 * and initializes it with a specific char
 * @size: size of the array.
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ch = (char *) malloc(sizeof(char) * size);

	if (ch == NULL)
		return (0);

	while (i < size)
	{
		*(ch + i) = c;
		i++;
	}

	*(ch + i) = '\0';

	return (ch);
}

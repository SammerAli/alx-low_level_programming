/**
 * cap_string - capitalizes all words of a string.
 * @a: string.
 * Return: string.
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] == ' ' || a[i] == '\n'
		|| a[i] == '\t' || a[i] == ','
		|| a[i] == ';' || a[i] == '!'
		|| a[i] == '?' || a[i] == '"'
		|| a[i] == '(' || a[i] == ')'
		|| a[i] == '{' || a[i] == '}'
		|| a[i] == '.')
		&& (a[i + 1] >= 97 && a[i + 1] <= 122))
		{
			a[i + 1] -= 32;
		}
		else if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] -= 32;
		}
		else
		{
			a[0] = a[0];
		}
	}
	return (a);
}

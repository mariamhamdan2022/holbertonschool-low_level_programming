
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int found;
	unsigned int result;

	i = 0;
	sign = 1;
	found = 0;
	result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found)
			break;
		i++;
	}

	if (!found)
		return (0);

	return (sign * result);
}


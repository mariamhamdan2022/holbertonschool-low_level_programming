
#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *h;
	char *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (start = haystack; *start != '\0'; start++)
	{
		h = start;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (start);
		}
	}

	return (NULL);
}

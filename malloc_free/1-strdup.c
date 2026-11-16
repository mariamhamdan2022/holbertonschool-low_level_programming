
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
    char *new_str;
    unsigned int len = 0;
    unsigned int i;

    if (str == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    new_str = malloc(sizeof(char) * (len + 1));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        new_str[i] = str[i];

    return (new_str);
}


#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
    char *new_str;
    unsigned int len;

    if (str == NULL)
        return (NULL);

    len = strlen(str);

    new_str = malloc(sizeof(char) * (len + 1));
    if (new_str == NULL)
        return (NULL);

    strcpy(new_str, str);

    return (new_str);
}

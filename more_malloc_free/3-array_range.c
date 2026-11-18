
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array, or NULL
 */
int *array_range(int min, int max)
{
	size_t i, count;
	int *array;
	int value;

	if (min > max)
		return (NULL);

	count = (size_t)((unsigned int)max - (unsigned int)min) + 1;

	if (count > (size_t)-1 / sizeof(int))
		return (NULL);

	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	value = min;
	for (i = 0; i < count; i++)
	{
		array[i] = value;
		if (i + 1 < count)
			value++;
	}

	return (array);
}

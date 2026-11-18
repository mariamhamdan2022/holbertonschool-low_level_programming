
#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints the information of a dog
 * @d: pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

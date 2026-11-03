#include <stdio.h>

/**
 * main - Prints numbers in hexadecimal
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	number = 0;
	while (number <= 5)
	{
		putchar(number + 'a');
		number++;
	}

	putchar('\n');
	return (0);
}

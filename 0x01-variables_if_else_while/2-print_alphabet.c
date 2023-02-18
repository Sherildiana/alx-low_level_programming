#include <stdio.h>

/**
 * main -Program that prints a linstandard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

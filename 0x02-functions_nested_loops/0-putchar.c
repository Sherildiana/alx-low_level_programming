#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to c stdout
 *
 * Return: on Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

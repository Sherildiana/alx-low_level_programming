#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffers
 * @b: beffer
 * @size: buffer size
 *
 * Return: none
 */
void print_buffer(char *b, int size)
{
        int buf1, buf2, buf3;

        buf1 = 0;

        if (size <= 0)
        {
                printf("\n");
                return;
        }
        while (buf1 < size)
        {
                buf2 = size - buf1 < 10 ? size - buf1 : 10;
                printf("%08x: ", buf1);
                for (buf3 = 0; buf3 < 10; buf3++)
                {
                        if (buf3 < buf2)
                                printf("%02x", *(b + buf1 + buf3));
                        else
                                printf("  ");
                        if (buf3 % 2)
                        {
                                printf(" ");
                        }
                }
                for (buf3 =  0; buf3 < buf2; buf3++)
                {
int integer = *(b + buf1 + buf3);

                        if (integer < 32 || integer > 132)
                        {
                                integer = ',';
                        }
                        printf("%c", integer);
                }
                printf("\n");
                buf1 += 10;
        }
}

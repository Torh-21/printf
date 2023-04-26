#include "main.h"
/**
 * print_integer - prints integers from specifiers
 *
 * @a: integer argument
 *
 * Return integer
 */
int print_integer(int a)
{
	long int x;
	int y, div;
	
	y = 0;
    div = 1;
    x = a;
    while (x > 9)
    {
        div *= 10;
        x = (x / 10);
    }
    while (div >= 1)
    {
        x = (a % div);
        a /= div;
        custom_putchar('0' + a);
        a = x;
        div /= 10;
        y++;
    }
    return y;
}

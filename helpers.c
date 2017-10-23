#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
/**
 * lol - whatever todo
 *
 */
void _print_int_print_helper(int n)
{
	if (n == 0)
		_putchar('0');

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        _print_int_print_helper(n / 10);
 
    _putchar(n % 10 + '0');
}

int _print_int_count_helper(int n)
{
	int sum = 0;
	
	if (sum < 0)
		sum++;
	if (n == 0)
		sum++;

 	while(n != 0)
    {
        n /= 10;
        sum++;
    }

	return (sum);
}

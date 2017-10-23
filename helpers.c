#include "holberton.h"
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

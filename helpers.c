#include "holberton.h"
/**
 * lol - whatever todo
 *
 */
void _print_int_print_helper(int n)
{
	unsigned int un;

	if (n == 0)
	{
		_putchar('0');
		return;
	}	

    if (n < 0) 
        _putchar('-'), un = -n;
	else
		un = n;

    if (un / 10)
        _print_int_print_helper(un / 10);
 
    _putchar(un % 10 + '0');
	return;
}

int _print_int_count_helper(int n)
{
	unsigned int un;
	int sum = 0;
	
	if (n == 0)
		return (1);
	
	if (n < 0)
		sum++, un = -n;
	else
		un = n;
 	while(un != 0)
    {
        un /= 10;
        sum++;
    }

	return (sum);
}

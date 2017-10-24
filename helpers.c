#include "holberton.h"
/**
 * _print_int_print_helper - helps _print_int put every char to stdio
 * @n: int to be printed
 */
int _print_int_helper(int n)
{
	unsigned int un;
	int sum = 0;

	if (n == 0)
	{
		_putchar('0');
		return(1);
	}

	if (n < 0)
		_putchar('-'), un = -n, sum++;
	else
		un = n;

	if (un / 10)
		sum += _print_int_helper(un / 10);

	_putchar(un % 10 + '0');
	return (sum + 1);
}
/**
 * _print_int_count_helper - helper _print_int to count
 * @n: int to count
 *
 * Return: number of chars the int would print
 */
/* int _print_int_count_helper(int n) */
/* { */
	/* unsigned int un; */
	/* int sum = 0; */

	/* if (n == 0) */
		/* return (1); */

	/* if (n < 0) */
		/* sum++, un = -n; */
	/* else */
		/* un = n; */
	/* while (un != 0) */
		/* un /= 10, sum++; */

	/* return (sum); */
/* } */

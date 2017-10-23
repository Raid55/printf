#include "holberton.h"
/**
 * _print_int
 *
 */
int _print_int(va_list list)
{
	int n = va_arg(list, int);

	_print_int_helper(n);

	/*todo count int and return int size*/
	return (1);
}
/**
 * _print_str
 *
 */
int _print_str(va_list list)
{
	int i = 0;
	int sum;
	char *s = va_arg(list, char *);
	
	if (s == NULL)
		s = "(null)";
	while (s[i])
		_putchar(s[i]), i++, sum++;

	return (sum);
}
/**
 * _print_char
 *
 *
 */
int _print_char(va_list list)
{ 
	char c = va_arg(list, int);
	
	if (!c)
		c = ' ';
	_putchar(c);

	return (1);
}

#include "holberton.h"

/**
 * _print_rot13 - prints string in ROT13
 * @list: va arg list
 *
 * Return: amount of printed chars
 */
int _print_rot13(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0, sum = 0;

	if (!s)
		return (-1);
	
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || 
				(s[i] >= 'A' && s[i] <= 'M'))
			_putchar(s[i] + 13), sum++;
		else if ((s[i] >= 'n' && s[i] <= 'z') ||
					(s[i] >= 'N' && s[i] <= 'Z'))
			_putchar(s[i] - 13), sum++;
		else
			_putchar(s[i]), sum++;
		i++;
	}
	return (sum);
}
/**
 * _print_rev - prints reverse of string
 * @list: va args list
 *
 * Return: amount of printed chars
 */
int _print_rev(va_list list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char *);

	if (s == NULL)
		return (-1);
	_print_rev_helper(s);
	
	while (s[i++]);

	return (--i);
}
/**
 *
 */
int _print_binary(va_list list)
{

	int n = va_arg(list, int);
	unsigned int x;
	if (n == 0)
	{
		_putchar('0');
		return(1);
	}
	if (n < 0)
		return (-1);

	x = n;
	return ((_print_binary_helper(x)));
}

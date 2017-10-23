#ifndef PRINT_H
#define PRINT_H

/*standard libs*/
#include <stdarg.h>
#include <stdlib.h>

/*helper functions that will do the helping*/
int _putchar(char);
void _print_int_helper(int);

/*printing functions that will do the printing */
int _print_int(va_list);
int _print_str(va_list);
int _print_char(va_list);

/*main functions to prototype*/
int _printf(const char *format, ...);

/**
 * f_mod - structure that holds format mods and their function
 * @mod: what mod
 * @func: func for its respective mod
 */
typedef struct f_mod
{
	char *mod;
	int (*func)(va_list);
} format_mod;

#endif

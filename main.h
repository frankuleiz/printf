#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *struct flags - struct to store flags for printf
 *@minus: flag to left justify output
 *@plus: flag to force a sign (+ or -) to be used as a number
 *@space: insert a space before +ve number
 *@hash: add O,Ox or OX
 *@zero: left pad the numver
 *@width: minimum width
 *@precision: number of digits to display
 */
typedef struct flags
{
	int minus;
	int plus;
	int space;
	int hash;
	int zero;
	int width;
	int precision;
} flags_t;


int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int print_binary(va_list args, flags_t *flags);

#endif


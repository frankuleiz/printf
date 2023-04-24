#include "main.h"
/**
 *conversion - selects the right printing function
 *@s: conversion specifier
 *Return: a pointer to the matching printing function
 */
int (*conversion(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int}
	};
	int flags = 4;

	register int i;

	for (i = 0; i < flags; i++)
	{
		if (func_arr[i].c == s)
		{
			return (func_arr[i].f);
		}
	}
	return (NULL);
}


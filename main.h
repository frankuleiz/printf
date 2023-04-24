#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int (*conversion(char s))(va_list, flags_t *);

#endif


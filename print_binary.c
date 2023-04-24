#include "main.h"
/**
 *print_binary - prints an unsigned int in binary
 *@args: va_list
 *@flags: struct with formatting flags
 *Return: count
 */
int print_binary(va_list args, flags_t *flags)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (flags->hash)

		_putchar('0');
		_putchar('b');
		count += 2;
	unsigned int mask = 1;
	int num_bits = 1;

	while (n >= (mask << 1))
	
		mask <<= 1;
		num_bits++;
	
	while (num_bits > 0)
	
		if (n & mask)
		
			_putchar('1');
	       	else
		
			_putchar('0');
		
		count++;
		num_bits--;
		mask >>= 1;
	
	return (count);
}

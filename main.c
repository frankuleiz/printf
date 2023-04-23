#include "main.h"
int main()
{
	int count = _printf("Hello, %s! The answer is %d%c.\n", "world", 42, '%');
	printf("Total characters printed: %d\n", count);
	return (0);
}

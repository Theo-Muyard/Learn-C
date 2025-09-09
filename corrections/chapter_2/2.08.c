#include <stdio.h>

unsigned	rot_right(unsigned x, int n)
{
	int			bits;
	unsigned	mask;
	
	bits = 8;
	mask = (1U << bits) - 1;
	n = n % bits;
	
	return (((x >> n) | (x << (bits - n))) & mask);
}

int		main()
{
	unsigned x = 0b10101100;
	int n = 5;

	unsigned result = rot_right(x, n);
	printf("Result: %u (binary: %08b)\n", result, result);
	return (0);
}
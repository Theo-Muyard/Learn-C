#include <stdio.h>

unsigned	reverse(unsigned x, int p, int n)
{
	unsigned	mask;

	mask = ((1U << n) - 1) << (p + 1 - n);
	return (x ^ mask);
}

int			main()
{
	unsigned x = 0b10101100;
	int p = 5;
	int n = 3;

	unsigned result = reverse(x, p, n);
	printf("Result: %u (binary: %08b)\n", result, result);
	return (0);
}
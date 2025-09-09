#include <stdio.h>

unsigned fix_bits(unsigned x, int p, int n, unsigned y)
{
	// Define variables
	unsigned mask;
	unsigned x_cleared;
	unsigned y_bits;
	unsigned y_bits_shifted;

	// Create a mask with all bits set to 1, except for the n target bits (starting at p)
	mask = ~(((1u << n) - 1) << (p + 1 - n));
	x_cleared = x & mask;

	// Extract the rightmost n bits of y
	y_bits = y & ((1U << n) - 1);

	// Shift those bits into the correct position
	y_bits_shifted = y_bits << (p + 1 - n);

	// Combine cleared x with shifted bits from y
	return (x_cleared | y_bits_shifted);
}

int main()
{
	unsigned x = 0b10101100;
	unsigned y = 0b11110111;
	int p = 5;
	int n = 3;

	unsigned result = fix_bits(x, p, n, y);
	printf("Result: %u (binary: %08b)\n", result, result);
	return (0);
}
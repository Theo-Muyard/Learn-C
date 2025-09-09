#include <stdio.h>

int	count_bits(unsigned x)
{
	int	b;

	b = 0;
	while (x)
	{
		x &= (x - 1);
		++b;
	}
	return (b);
}

int	main()
{
	unsigned x = 0b10101100;

	printf("%d\n", count_bits(x));
}
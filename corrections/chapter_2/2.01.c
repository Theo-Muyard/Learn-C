#include <stdio.h>
#include <limits.h>

long	ft_pow(int x, int y)
{
	long nbr = 1;
	while (y > 0)
	{
		nbr *= x;
		y--;
	}
	return (nbr);
}

int	main()
{
	// Values of limits.h
	printf("From <limits.h>\n");
	printf("--- SIGNED TYPES ---\n\nCHAR: %d to %d\nINT: %d to %d\nLONG: %ld to %ld\n\n", CHAR_MIN, CHAR_MAX, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("--- UNSIGNED TYPES ---\n\nCHAR: %d to %d\nINT: %d to %u\nLONG: %d to %lu\n", 0, UCHAR_MAX, 0, UINT_MAX, 0, ULONG_MAX);

	// Values calculated
	int	bits;

	long	sc_min, sc_max, uc_max, si_min, si_max, ui_max, sl_min, sl_max, ul_max;
	// Char MIN & MAX & Unsigned char MAX
	bits = sizeof (char) * 8;

	sc_min = -(ft_pow(2, bits - 1));
	sc_max = ft_pow(2, bits - 1) - 1;
	uc_max = ft_pow(2, bits) - 1;

	// Int MIN & MAX & Unsigned int MAX
	bits = sizeof (int) * 8;

	si_min = -(ft_pow(2, bits - 1));
	si_max = ft_pow(2, bits - 1) - 1;
	ui_max = ft_pow(2, bits) - 1;

	// long MIN & MAX & Unsigned long MAX
	bits = sizeof (long) * 8;

	sl_min = -(ft_pow(2, bits - 1));
	sl_max = ft_pow(2, bits - 1) - 1;
	ul_max = ft_pow(2, bits) - 1;

	printf("\nCalculated\n");
	printf("--- SIGNED TYPES ---\n\nCHAR: %ld to %ld\nINT: %ld to %ld\nLONG: %ld to %ld\n\n", sc_min, sc_max, si_min, si_max, sl_min, sl_max);
	printf("--- UNSIGNED TYPES ---\n\nCHAR: %d to %lu\nINT: %d to %lu\nLONG: %d to %lu\n", 0, uc_max, 0, ui_max, 0, ul_max);
	return (0);
}
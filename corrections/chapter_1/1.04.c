#include <stdio.h>

int	main()
{
	// Define variables
	float	fahr;
	float	celsius;
	int		max;
	int		min;
	int		interval;

	// Variables declarations
	min = 0;
	max = 300;
	interval = 20;
	celsius = min;

	printf("%6s %6s\n", "CELSIUS", "FAHR");
	while (celsius <= max)
	{
		fahr = (9.0 / 5.0) * celsius + 32.0; // Convert celsius in fahr
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + interval;
	}
}
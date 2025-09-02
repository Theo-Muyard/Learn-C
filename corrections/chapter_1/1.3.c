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
	fahr = min;

	printf("%6s %6s\n", "FAHR", "CELSIUS");
	// As long as fahr is less than max
	while (fahr <= max)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0); // Convert fahr in celsius
		
		// Display fahr and celsius value (3.0 = witdh: 3, decimal: 0 | 6.1 = witdh: 6, decimal: 1)
		printf("%3.0f %6.1f\n", fahr, celsius); 
		fahr = fahr + interval; // Add interval to fahr
	}
}
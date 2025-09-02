#include <stdio.h>

#define TO_CELSIUS	0
#define TO_FAHR	1

/*
 The convert fonction has for role to converts the nbr to fahr if "toFahr" is equal to 1, 
 else it converts the nbr to celsius
*/
float	convert(float nbr, int toFahr)
{
	float	value;

	value = 0;
	if (toFahr)
		value = (9.0 / 5.0) * nbr + 32.0;
	else
		value = (5.0 / 9.0) * (nbr - 32.0);
	return (value); 
	// The type of returned value must be same to the type of the function*
}

int		main()
{
	// Define variables
	int		min;
	int		max;
	int		interval;
	float	fahr;
	float	celsius;

	// Variables declarations
	min = 0;
	max = 300;
	interval = 20;
	fahr = min;
	celsius = 0;

	/*
	Display the values with convert function
	FAHR -> CELSIUS
	CELSIUS -> FAHR
	*/
	printf("%6s %6s\n", "FAHR", "CELSIUS");
	while (fahr <= max)
	{
		celsius = convert(fahr, TO_CELSIUS);
		printf("%6.0f %6.1f\n", fahr, celsius);
		fahr = fahr + interval;
	}

	fahr = 0;
	celsius = min;

	printf("\n%6s %6s\n", "CELSIUS", "FAHR");
	while (celsius <= max)
	{
		fahr = convert(celsius, TO_FAHR);
		printf("%6.0f %6.0f\n", celsius, fahr);
		celsius = celsius + interval;
	}
	return (0);
}
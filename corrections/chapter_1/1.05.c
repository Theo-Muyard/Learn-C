#include <stdio.h>

int	main()
{
	int	fahr;

	/*
	Display all fahr values between min and max with an interval (20) and their equivalent in celsius
	This program is the same as 1.3, with for loop
	*/
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
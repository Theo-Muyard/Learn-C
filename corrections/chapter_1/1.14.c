#include <stdio.h>

// The number of char displayable (man ascii)
#define ASCII_LENGTH 95

int	main()
{
	// Define variables
	int	c;
	int	arr[ASCII_LENGTH];
	int	i;
	int	j;

	for (i = 0; i < ASCII_LENGTH; ++i)
		arr[i] = 0;

	while ((c = getchar()) != EOF)
	{
		// If char is an displayable char (man ascii one more time)
		if (c >= ' ' && c < 127)
			++arr[c - ' ']; // Raise it
	}

	printf("\nALPHA HISTOGRAM\n");
	/*
	Display all char, with their number of occurences
	For space char, since it's "invisible", we replace it with [SP]
	*/
	for (i = 0; i < ASCII_LENGTH; ++i)
	{
		if (arr[i] > 1)
		{
			if (i == 0)
				printf("[SP]: ");
			else
				printf("%4c: ", (i + ' '));
			for (j = 0; j < arr[i]; ++j)
				printf("*");
			printf("\n");
		}
	}
}
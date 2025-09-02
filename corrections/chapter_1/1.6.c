#include <stdio.h>

int	main()
{
	int	c;

	// Read all char until EOF (End Of File)
	while ((c = getchar()) != EOF) // C = Actual char
	{
		/*
		Write value of c != EOF (0 or 1)
		Its 1 until c = EOF
		*/
		printf("\n%d", (c != EOF)); 
	}
	printf("\n(EOF) %d\n", (c != EOF)); // Write value of c != EOF (Now, its 0)
}
#include <stdio.h>

#define IN 1
#define OUT 0

int	main()
{
	// Define variables
	int	c;
	int	state;

	state = OUT; // At first, we are outside of a word
	while ((c = getchar()) != EOF)
	{
		// If the current char is an new line, an space or an TAB, we are outside of a word
		if (c == '\n' || c == ' ' || c == '\t')
		{
			// If state was IN, we get out of a word
			if (state == IN)
				putchar('\n');
			state = OUT;
		}
		else
		{
			putchar(c);
			state = IN;
		}
	}
}
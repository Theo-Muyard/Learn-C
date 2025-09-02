#include <stdio.h>

int main(void) 
{
	// Define variables
	int	c;
	int	prev;

	prev = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			// If last char is'nt space, display it
			if (prev != ' ')
				putchar(' ');
		}
		else
			putchar(c);
		prev = c;
	}
}
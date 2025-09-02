#include <stdio.h>

int	main()
{
	// Define variables
	int	c;
	int	ns;
	int	nt;
	int	nl;

	// Variables declarations
	ns = nl = nt = 0;
	while ((c = getchar()) != EOF)
	{
		// If c is an space, raise ns (Number spaces) 
		if (c == ' ')
			++ns;
		// Else, if c is an TAB, raise nt (Number TABS) 
		else if (c == '\t')
			++nt;
		// Else, if c is an new line, raise nl (Number lines) 
		else if (c == '\n')
			++nl;
	}
	// Display all values (Spaces, TABS, LINES)
	printf("\nSPACES: %d | TABS: %d | LINES: %d\n", ns, nt, nl);
}
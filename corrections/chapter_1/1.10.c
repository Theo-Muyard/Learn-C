#include <stdio.h>

int	main()
{
	int	c;

	while ((c = getchar()) != EOF)
	{
		// If the current char is an TAB, display it
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		// Else if the current char is an backspace, display it
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		// Else if the current char is an \, display it
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
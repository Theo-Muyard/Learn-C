#include <stdio.h>

#define TABSTOP 8
#define MAX_LINES 100
#define MAX 1000

// The function strcpy (man strcpy)
void	ft_strcpy(char dest[], char src[])
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
}

int		main()
{
	// Define variables
	int		c;
	int		i;
	int		n;
	int		pos;
	int		nbr_lines;
	int		spaces;
	char	lines[MAX_LINES][MAX];
	char	line[MAX];

	// Variables declarations
	i = 0;
	nbr_lines = 0;
	spaces = 0;
	pos = 0;

	while ((c = getchar()) != EOF)
	{
		// We accumulate spaces
		if (c == ' ')
			spaces++;
		// If the current char is'nt space
		else 
		{
			// Loop while space(s)
			while (spaces > 0)
			{
				// Calculate number of column before next TABSTOP
				n = TABSTOP - (pos % TABSTOP);

				// If number of spaces is greater than n variable (above)
				if (spaces >= n)
				{
					// Add a.TAB, substract the variable n from spaces, and calculate new position
					line[i++] = '\t';
					spaces = spaces - n;
					pos = pos + n;
				}
				// Else, add a simple space
				else
				{
					line[i++] = ' ';
					spaces--;
					pos++;
				}
			}
			// If the current char is a new line: add it on lines and reset variables
			if (c == '\n')
			{
				line[i] = '\0';
				if (i > 0 && nbr_lines < MAX_LINES)
				{
					ft_strcpy(lines[nbr_lines], line);
					++nbr_lines;
				}
				i = pos = spaces = 0;
			}
			// Else, if we can add an char on line, add it
			else if (i < MAX - 1)
			{
				line[i++] = c;
				pos++;
			}
		}
	}
	// If last line can be added on lines, add it
	if (i > 0 && nbr_lines < MAX_LINES)
	{
		line[i] = '\0';
		ft_strcpy(lines[nbr_lines], line);
		++nbr_lines;
	}
	// Display all lines
	printf("\nLines:");
	for (int j = 0; j < nbr_lines; ++j)
	{
		putchar('\n');
		for (int k = 0; lines[j][k]; ++k)
		{
			if (lines[j][k] == '\t')
			{
				putchar('\\');
				putchar('t');
			}
			else if (lines[j][k] == ' ')
				putchar('.');
			else
				putchar(lines[j][k]);
		}
	}
	putchar('\n');
	return (0);
}
#include <stdio.h>

#define MAX_LINES 100
#define MAX 20

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
	int		j;
	int		pos;
	int		cut;
	int		nbr_lines;
	char	lines[MAX_LINES][MAX];
	char	line[MAX];

	i = nbr_lines = j = 0;
	pos = -1;
	while ((c = getchar()) != EOF)
	{
		line[i] = c;
		// If a word ends, save the position
		if (c == ' ' || c == '\t')
				pos = i;
		// If new line, add it
		if (c == '\n') {
			line[i] = '\0';
			ft_strcpy(lines[nbr_lines++], line);
			i = 0;
			pos = -1;
		}
		++i;
		// If the len of current line is the max length for a line
		if (i >= MAX - 1)
		{
			// Get the position to cut
			if (pos >= 0)
				cut = pos;
			else
				cut = i;
			line[cut] = '\0';

			// If we can add a line, add it
			if (nbr_lines <= MAX_LINES)
				ft_strcpy(lines[nbr_lines++], line);

			// Copy all char after the cut in line and reset
			j = 0;
			for (int k = cut + 1; k < i; ++k)
				line[j++] = line[k];
			i = j;
			pos = -1;
		}
	}

	// If last line can be added on lines, add it
	if (i > 0)
	{
		line[i] = '\0';
		if (nbr_lines < MAX_LINES)
			ft_strcpy(lines[nbr_lines++], line);
	}
	// Display all lines
	printf("\nLines:\n");
	for (int j = 0; j < nbr_lines; ++j)
		printf("%s\n", lines[j]);
	putchar('\n');
	return (0);
}
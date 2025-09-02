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
	int		nbr_lines;
	int		spaces;
	char	lines[MAX_LINES][MAX];
	char	line[MAX];

	// Variables declarations
	i = 0;
	nbr_lines = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			line[i] = '\0';
			if (i > 0 && nbr_lines < MAX_LINES)
			{
				ft_strcpy(lines[nbr_lines], line);
				++nbr_lines;
			}
			i = 0;
		}
		else if (c == '\t')
		{
			spaces = TABSTOP - (i % TABSTOP);
			while (spaces && i < MAX - 1)
			{
				line[i] = ' ';
				--spaces;
				++i;
			}
		}
		else if (i < MAX - 1)
		{
			line[i] = c;
			++i;
		}
	}
	if (i > 0 && nbr_lines < MAX_LINES)
	{
		line[i] = '\0';
		ft_strcpy(lines[nbr_lines], line);
		++nbr_lines;
	}
	printf("\nLines:");
	for (int j = 0; j < nbr_lines; ++j)
	{
		putchar('\n');
		for (int k = 0; lines[j][k]; ++k)
		{
			if (lines[j][k] == ' ')
				putchar('.');
			else
				putchar(lines[j][k]);
		}
	}
	putchar('\n');
	return (0);
}
#include <stdio.h>

#define MAX 1000
#define MAX_LINES 100

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

int	  main()
{
	// Define variables
	int		c;
	int		i;
	int		nbr_lines;
	char	lines[MAX_LINES][MAX];
	char	line[MAX];

	// Variables declarations
	i = 0;
	nbr_lines = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			/*
			Loop while I is a space or a TAB
			Decrement I
			*/
			while (i > 0 && (line[i-1] == ' ' || line[i-1] == '\t'))
					i--;
			line[i] = '\0';
			// If we can add the current line in lines, copy it
			if (i > 0 && nbr_lines < MAX_LINES)
			{
				ft_strcpy(lines[nbr_lines], line);
				++nbr_lines;
			}
			i = 0;
		}
		else if (i < MAX - 1)
			line[i++] = c;
		else
			i++;
	}

	if (i > 0 && i < MAX-1)
	{
		while (i > 0 && (line[i-1] == ' ' || line[i-1] == '\t'))
					i--;
		line[i] = '\0';
	}

	else if (i > 0 && i > MAX - 1)
		line[MAX - 1] = '\0';

	if (i > 0 && nbr_lines < MAX_LINES)
	{
		ft_strcpy(lines[nbr_lines], line);
		++nbr_lines;
	}
	
	printf("\nLines:");
	for (int j = 0; j < nbr_lines; ++j)
		printf("\n%s", lines[j]);
	printf("\n");
	return (0);
}
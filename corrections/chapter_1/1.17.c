#include <stdio.h>

#define MAX 1000
#define MAX_LINES 100
#define AFF_LEN 80

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

// The function strlen (man strlen)
int		ft_strlen(char src[])
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
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
			line[i] = '\0';
			/*
			If len of currrent line is greater than AFF_LEN and nbr_lines is less than MAX_LINES
			Copy the current line in lines
			*/
			if (i > AFF_LEN && nbr_lines < MAX_LINES)
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
		line[i] = '\0';

	else if (i > 0 && i > MAX - 1)
		line[MAX - 1] = '\0';

	if (i > AFF_LEN && nbr_lines < MAX_LINES)
	{
		ft_strcpy(lines[nbr_lines], line);
		++nbr_lines;
	}

	// Display all lines in lines array
	printf("\nLines longer than %d :", AFF_LEN);
	for (int j = 0; j < nbr_lines; ++j)
		printf("\n%s (%d)", lines[j], ft_strlen(lines[j]));
	printf("\n");
	return (0);
}
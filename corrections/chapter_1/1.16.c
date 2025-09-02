#include <stdio.h>

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

int	  main()
{
	// Define variables
	int		c;
	int		i;
	char	line[MAX];
	char	max_line[MAX];
	int		max_len;

	i = max_len = 0;
	while ((c = getchar()) != EOF)
	{
		// If is end of the line
		if (c == '\n')
		{
			line[i] = '\0'; // String end char
			/* 
			If the len of current line is greater than max_len
			Copy the current line in max_line
			*/
			if (i > max_len)
			{
				ft_strcpy(max_line, line);
				max_len = i;
			}
			i = 0;
		}
		// Else, if we can add the char in line array, add it
		else if (i < MAX - 1)
			line[i++] = c;
		else
			i++;
	}

	// If there is a current line, and we can add the character to the line array.
	if (i > 0 && i < MAX-1)
		line[i] = '\0';
	/* 
	Else, if the len of current line is greater than MAX, 
	The last char of line becomes END CHAR
	*/
	else if (i > 0 && i > MAX - 1)
		line[MAX - 1] = '\0';
	/* 
	If the len of current line is greater than max_len
	Copy the current line in max_line
	*/
	if (i > max_len)
	{
		ft_strcpy(max_line, line);
		max_len = i;
	}
	printf("\n%s (%d)\n", max_line, max_len);
	return (0);
}
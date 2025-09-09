#include <stdio.h>

// Equivalent of strlen (man strlen)
int		ft_strlen(char s[])
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

void	add_chars(char s[], char tab[])
{
	// Define variables
	int	i;
	int	j;
	int	len;

	// Initialize variables
	i = 0;
	len = ft_strlen(tab);

	while (s[i])
	{
		j = 0;
		// Loop while the character is not already in tab
		while (tab[j] && (s[i] != tab[j]))
			++j;
		/* 
		If we reached the end of tab without finding s[i],
		then add this new character into tab
		*/
		if (j == len)
		{
			tab[j] = s[i];
			tab[j+1] = '\0';
			++len;
		}
		++i;
	}
}

/*
 Check if the character c is inside tab
 Return 1 if found
 Return 0 if not found
*/
int		contains(char c, char tab[])
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (c == tab[i])
			return (1);
		++i;
	}
	return (0);
}

void	strcut(char s[], char tab[])
{
	int	r;
	int	w;

	r = w = 0;
	while (s[r])
	{
		// If the current character is not in tab, keep it
		if (!contains(s[r], tab))
			s[w++] = s[r];
		++r;
	}
	s[w] = '\0';
}

int		main()
{
	// Define & initialize variables
	char	s1[] = "Bien le bonjour tout le monde !";
	char	s2[] = "t";
	char	toRemoved[] = "";
	
	add_chars(s2, toRemoved); // Collect all unique forbidden chars
	strcut(s1, toRemoved); // Remove forbidden chars from s1

	// Display the resulting string
	for (int i = 0; s1[i]; ++i)
		printf("%c", s1[i]);
	printf("\n");
	return (0);
}

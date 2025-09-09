#include <stdio.h>

int	where(char s1[], char s2[])
{
	int	i;
	int	j;

	i = j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (i);
			++j;
		}	
		++i;
	}
	return (-1);
}

int	main()
{
	char	s1[] = "Bien le bonjour tout le monde !";
	char	s2[] = "t";
	printf("%d\n", where(s1, s2));
	return (0);
}
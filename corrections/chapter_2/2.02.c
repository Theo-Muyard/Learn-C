#include <stdio.h>

int	main()
{
	int		i;
	int		c;
	int		lim;
	char	s[10];

	lim = 10;
	for (i = 0; i < lim - 1; i++)
	{
		if ((c = getchar()) == '\n')
			i = lim - 1;
		else if (c == EOF)
			i = lim - 1;
		else
			s[i] = c;
	}
	s[i] = '\0';
	printf("%s\n", s);
	return (0);
}
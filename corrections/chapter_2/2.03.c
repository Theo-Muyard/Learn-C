#include <stdio.h>

long	htoi(char s[])
{
	// Define variables
	int		i;
	int		nbr;
	long	result;

	// Variables declarations
	result = 0;
	nbr = 0;
	i = 0;

	// Skip 0x ou 0X
	if (s[0] == '0' && (s[1] == 'X' || s[1] == 'x'))
		i = 2;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			nbr = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			nbr = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			nbr = s[i] - 'A' + 10;
		else 
			nbr = 0;
		result = result * 16 + nbr;
		++i;
	}
	return (result);
}

int	main()
{
	printf("%ld\n", htoi("0X01FAC78"));
	return (0);
}
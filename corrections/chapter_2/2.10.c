#include <stdio.h>

int	min(int c)
{
	return ((c >= 'A' && c<= 'Z') ? (c - 'A' + 'a') : c);
}

int	main()
{
	printf("%c\n", min('b'));
	return (0);
}
#include <stdio.h>

int		ft_strlen(char s[])
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

void	reverse(char s[])
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		temp = s[i];
		s[i++] = s[j];
		s[j--] = temp;
	}
}

void	itoa(int n, char s[])
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	sign = 0;

	num = n;
	if (num < 0)
	{
		num = -num;
		sign = 1;
	}

	do
	{
		s[i++] = num % 10 + '0';
	} while ((num /= 10) > 0);
	
	if (sign) 
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int		main()
{
	char s[12] = "";
	itoa(-2147483648, s);
	printf("%s\n", s);
}
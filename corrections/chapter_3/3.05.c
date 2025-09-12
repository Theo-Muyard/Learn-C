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

void	itob(int n, char s[], int b)
{
	int		i;
	int		sign;
	long	num;
	char	digits[] = "0123456789ABCDEF";

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
		s[i++] = digits[num % b];
	} while ((num /= b) > 0);
	
	if (sign) 
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int		main()
{
	char s[100] = "";
	itob(2780, s, 10);
	printf("%s\n", s);
	itob(2780, s, 16);
	printf("%s\n", s);
	itob(2780, s, 2);
	printf("%s\n", s);
}
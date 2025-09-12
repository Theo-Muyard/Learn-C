#include <stdio.h>

int		isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int		isAlpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

void	expend(char s1[], char s2[])
{
	int		i;
	int		j;
	char	c;

	i = j = 0;
	while (s1[i])
	{
		if (s1[i] == '-')
		{
			if (((isDigit(s1[i - 1]) && isDigit(s1[i + 1])) ||(isAlpha(s1[i - 1]) && isAlpha(s1[i + 1]))) && (s1[i - 1] < s1[i + 1]) && i > 0 && s1[i + 1] != '\0')
			{
				c = s1[i - 1] + 1;
				while (c <= s1[i + 1])
					s2[j++] = c++;
				i += 2;
			}
			else
				s2[j++] = s1[i++];
		}
		else
			s2[j++] = s1[i++];
	}
	s2[j] = '\0';
}

int		main()
{
	char s1[] = "--a-zC-F0-8_ -- paoigà_è-(av-c-gg-a)  a-z-h";
	char s2[100] = "";
	expend(s1, s2);
	printf("%s\n", s2);
}
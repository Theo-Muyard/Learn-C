#include <stdio.h>

void	escape(char s[], char t[])
{
	int	i;
	int	j;

	i = j = 0;
	while(t[i])
	{
		switch(t[i])
		{
			case '\t':
			{
				s[j++] = '\\';
				s[j++] = 't';
				break;
			}
			case '\n':
			{
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			}
			default:
				s[j++] = t[i];
				break;
		}
		++i;
	}
	s[j] = '\0';
}

void	r_escape(char s[], char t[])
{
	int	i;
	int	j;

	i = j = 0;
	while (t[i])
	{
		if (t[i] == '\\')
		{
			switch (t[i + 1])
			{
				case 't':
				{
					s[j++] = '\t';
					i += 2;
					break;
				}
				case 'n':
				{
					s[j++] = '\n';
					i += 2;
					break;
				}
				default:
					s[j++] = t[i++];
					break;
			}
		}
		else
		{
			s[j++] = t[i];
			++i;
		}
	}
	s[j] = '\0';
}

int	main()
{
	char t[] = "Salut à tous\tcomment allez vous?\n";
	char s[100] = "";
	escape(s, t);
	printf("%s\n", s);
}
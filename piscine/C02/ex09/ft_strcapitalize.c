#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i ++;
	}
	i = 0;
	while(str[i])
	{
		if(str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if(((str[i] >= 32 && str[i] <= 47) ||(str[i] >= 58 && str[i] <= 64)) && (str[i + 1] >= 'a' && str[i + 1]))
			{
				str[i + 1] = str[i + 1]- 32;
			}
		i++;			
	}
	return (str);
}

int	main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", s);
	ft_strcapitalize(s);
	printf("%s\n", s);
}

#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;
	while(*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	reverse(char *str)
{
	int	c;
	c = ft_strlen(str);
	while(c-- != '\0')
	{
		printf("%c", &str[c]);
	}
}

int	main(char *str)
{
	printf("Introduza algo: \n");
	scanf(" %s", &*str);
	reverse(str);
}

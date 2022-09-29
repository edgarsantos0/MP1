#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_revprint(char *str)
{
	int	c;
	int	a;
	
	c = ft_strlen(str);
	while (c-- >= 0)
	{
		write(1, &str[c], 1);
	}
}

int	main()
{
	ft_revprint("O caralho");
	return (0);
}

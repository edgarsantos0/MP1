#include <unistd.h>

char	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main()
{
	ft_putstr("wertyu");
	return (0);
}

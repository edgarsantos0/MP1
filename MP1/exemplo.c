#include <stdio.h>
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	
	while(*str)
	{
		write(1, &*str, 1);
		i++;
		str++;
	}
	return(i);
}

int	main()
{
	ft_putstr("Vao todos po caralhoo");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	v[75];
	int	i;
	i=0;
	v[i] = i + 1;
	for(i = 0; i < 75; i++)
	{
		printf("%d ", i+1);
	}
	return (0);
	/*while(i < 75)
	{
		printf("%d\n", v[i]);
		i++;
	}*/
}

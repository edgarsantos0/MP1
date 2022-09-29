#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int	filtro()
{
	int	d;
	int v[d]; 
	int f;
	int	i;
	i = 0;
	
	printf("Introduza um vetor, a sua dimensao e uma variavel:\n");
	scanf("%d", &d);
	scanf("%d", &f);

	if((f < 1) || (f > 15))
	{
		return (0);
	}
	else 
	{
		if(f % 4 == 0)
		{
			v[i] == 0;
		}
		++i;
	}
	return (v[i]);
}
int	main()
{
	filtro();
	printf("%d", filtro());
	return (0);
}

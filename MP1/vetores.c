#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 3

int	main()
{
	int v[M][N]; 
	int i; 
	int j;
	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			scanf("%d", &v[i][j]);
		}
	}
	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("%d\t", v[i][j]);
		}
		printf("\n");
	}
	return (0);
}

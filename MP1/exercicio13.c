#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	main()
{
	float	n1;
	float	n2;
	float	res;
	char	op;
	printf("Indique a conta a fazer: numero|operacao|numero \n");
	scanf("%f%c%f", &n1, &op, &n2);
	
	switch(op)
	{
		case '+':
		res = n1 + n2;
		printf("%f", res);
		break;
		
		case '-':
		res = n1 - n2;
		printf("%f", res);
		break;
		
		case '*':
		res = n1 * n2;
		printf("%f", res);
		break; 
		
		case '/':
		res = n1 / n2;
		printf("%f", res);
		break;
		
		default:
		printf("A operacao nao e valida. \n");
		break;  
	}
	
	return (0);
}

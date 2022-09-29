#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	main()
{
	float	preco;
	float	preco1;
	float	preco2;
	float	precofinal;
	char	nome[1000];
	
	printf("Introduzir nome do automovel: \n");
	scanf("%[^\n]s", &nome);
	
	printf("Introduzir preco de fabrica: \n");
	scanf("%f", &preco);
	
	preco1 = preco * 0.45;
	preco2 = preco * 0.28;
	precofinal = preco + preco1 + preco2;
	
	printf("Nome: \n%s\n", nome);
	printf("Preco final: \n%f", precofinal);
	
	return (0);
}

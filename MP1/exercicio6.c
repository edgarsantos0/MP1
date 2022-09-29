#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int		caracteres;
	char	nome[20];
	
	caracteres = 0;
	printf("Introduzir nome completo: \n");
	scanf("%19[^\n]s", &nome);

	printf("%s", nome);
	
	return (0);
}

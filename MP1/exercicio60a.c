#include <stdlib.h>
#include <string.h>

int	main()
{
	char	nome[20];
	char	sn[20];
	
	printf_s("Insira o seu nome: \n"),
	scanf_s("%s", &nome);
	printf_s("Insira o seu sobrenome: \n"),
	scanf_s("%s", &sn);
	
	printf_s("%s %s", nome, sn);
	
	return (0);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define ctr_secure_no_warnings

int	main()
{
	int		i1, j1, k1, i, j, k;
	char	completo[k1];
	char	nome[i1];
	char	sobrenome[j1];
	
	i1 = strlen(nome);
	j1 = strlen(sobrenome);
	k1 = strlen(completo);
	printf("Introduza o nome completo: \n");
	gets(completo);
	
	
	puts(atoi(&completo));
	return (0);
}

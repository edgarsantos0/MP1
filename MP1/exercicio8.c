#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int	main()
{
	setlocale(LC_ALL, "Potuguese");
	char	nome[50];
	float		nhoras;
	float		nfilhos;
	float	salariobruto;
	float	salarioliquido;
	float	INSS;
	float	IRS;
	
	printf("Introduzir nome: \n");
	scanf("%[^\n]s", &nome);
	
	printf("Introduzir numero de horas: \n");
	scanf("%d", nhoras);
	
	printf("Numero de dependentes: \n");
	scanf("%d", nfilhos);
	
	salariobruto = 12 * nhoras + 40 * nfilhos;
	INSS = 0.085 * salariobruto;
	IRS = 0.05 * salariobruto;
	salarioliquido = salariobruto - INSS - IRS;
	
	printf("O funcionario %s tem um salario bruto de %.2f desconta %.2f para o INSS e %.2f para o IRS resultando num salario liquido de %.2f euros. \n", nome, salario bruto, INSS, IRS, salarioliquido);
}

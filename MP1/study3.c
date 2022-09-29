#define ctr_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

FILE *fp;

typedef	struct
{
	int		nm;
	char	nome[50];
	int		nota;
}dados;

int	main()
{
	
	dados b[2];
	int	i = 50;
	char	a[i];
	int	j;
	fp = fopen("file.txt", "w");
	for(j = 0; j < 2; j++)
	{
		printf("struct:%d",j);
		scanf("%d", &b[j].nm);
		fflush(stdin);
		gets(b[j].nome);
		scanf("%d", &b[j].nota);
	}
	
	for(j = 0; j < 2; j++)
	{
		printf("struct:%d",j);
		fprintf(fp, "Nm: %d\n", b[j].nm);
		fflush(stdin);
		fprintf(fp, "Nome: ");
		fputs(b[j].nome, fp);
		fprintf(fp, "\n");
		fprintf(fp, "Nota: %d\n", b[j].nota);
	}
	fclose(fp);
	system("cls");
	fp = fopen("file.txt", "r");
	while(fgets(a, i, fp) != NULL)
	{
		printf("%s",a);
	}
	
	fclose(fp);
	return (0);
}

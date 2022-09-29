#include <stdio.h>
#include <stdlib.h>

int main()
{
float m, n1, n2;

printf("Nota obtida na primeira frequencia:\n");
scanf("%f", &n1);

printf("Nota obtida na segunda frequencia:\n");
scanf("%f", &n2);

m = (n1*0.5) + (n2*0.5);

if (m >= 9.5)
{
printf("O aluno esta aprovado com %.1f valores", m);
}
else
{
printf("O aluno esta reprovado com %.1f valores.", m);
}
return 0;
}

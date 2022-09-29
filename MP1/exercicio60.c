#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
char nome[20];
char sn[20];
char comp[40];
int i, size, size2;

printf ("Insira o seu nome: \n"),
gets (nome);
printf ("Insira o seu sobrenome: \n"),
gets (sn);

size=strlen(nome);

for(i=0; i<size; i++){
comp[i]=nome[i];
}
comp[size]=' ';

size2=strlen(sn);

for(i=0; i<size2; i++){
comp[size+1+i]=sn[i];
}

printf ("%s", comp);

}

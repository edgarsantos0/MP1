#include <stdio.h>
#include <stdlib.h>

void troca(int, int);

int main()
{
	int a,b;
	int aux;
	a=3;
	b=7;
	
	aux=a;
	a=b;
	b=aux;
	
	printf("a=%d ; b=%d", a, b);
	return 0;
	
}

void troca(int x, int y)
{
	int aux;
	aux=x;
	x=y;
	y=aux;
}

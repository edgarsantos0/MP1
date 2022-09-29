#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
float v1[3];
float v2[3];
int k;

//preencher vetores com numeros aleatorios entre -50, 50
//rand() gera um numero inteiro entre 0 32767
//como gerar valores reais entre A e b

for(k=0;k<3;k++)
{ 
	v1[k]=-50+1.0*rand()/32767*(50-(50));
	v2[k]=1.0*rand()/32767*50*pow(-1, rand());
	printf("V1[%d]=%.4f \n", k+1, v1[k]);
	printf("V2[%d]=%.4f \n", k+1, v2[k]);
}

return 0;

}

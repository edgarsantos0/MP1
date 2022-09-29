#include <stdio.h>
#define MAX_NOME 20
#define MAX_NOME_S "20"
void main(void)
{
char name[MAX_NOME] = ""; // definition and initialization - empty
int i = 0;
for (i = 1; i <= 20; i++) {// cycle 20 rounds
/* insertion of full name */
printf("Insert the %dº name : ", i);
//only allows chars between a-z and A-Z + spaces
//only reads a maximum of MAX_NAME_S chars
//if there are remaining chars they are kept in the buffer
scanf(" %" MAX_NOME_S "[a-zA-Z ]s", name);
// same as: scanf(" %49[a-zA-Z ]s", name);
/* visualization of the inserted name */
printf("It was inserted ‘%s’\n", name);
}
system("pause");
}



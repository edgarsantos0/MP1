#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	FILE* fp1;
	FILE* fp2;
    int i, j;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    while (1) {
       /* c = fgetc(fp);
        if (feof(fp)) {
            break;
        }printf("%c", c);*/
        
        if (feof(fp1) || feof(fp2)) {
            break;
        }
        
        else
        {
        	
        	
		}
        
    }
    fclose(fp);
}

#include <stdio.h>

int main() 
{
	int i,j,k;
    int rows = 5;

    for (i = 1; i <= rows; i++) 
	{
     
        for (j = i; j < rows; j++)
            printf(" ");
        for ( k = 1; k <= i; k++)
            printf("*");

      
        printf(" | ");


        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("%d", k);

        printf(" | ");

       
        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("%c", 'A' + k - 1);

        printf("\n");
    }

    return 0;
}


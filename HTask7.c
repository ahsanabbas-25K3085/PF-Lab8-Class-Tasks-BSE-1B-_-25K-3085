#include <stdio.h>

int main()
 {
 	int i,j,k,s;
    int rows = 5;
    int width = rows * 2 + 3; 

    for (i = 1; i <= rows; i++)
	 {
        for ( j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("*");
        int starChars = (rows - i) + (2 * i - 1);
        for (s = starChars; s < width; s++)
            printf(" ");
        printf("| ");

        
        for (j = i; j < rows; j++)
            printf(" ");
        for ( k = 1; k <= (2 * i - 1); k++)
            printf("%d", k);
        int numChars = (rows - i) + (2 * i - 1);
        for (s = numChars; s < width; s++)
            printf(" ");
        printf("| ");

     
        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("%c", 'A' + k - 1);
        printf("\n");
    }

    return 0;
}


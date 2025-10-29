#include <stdio.h>

int main() 
{
	int i,j;
    int temp[4][4] = 
	{
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };
    int rows = 4, cols = 4;

    printf("Cold Spots (Row, Column, Temp):\n");
    for (i = 0; i < rows; i++)
	 {
        for ( j = 0; j < cols; j++)
		 {
            int current = temp[i][j];
            int isCold = 1;

        
            if (i > 0 && temp[i - 1][j] <= current) isCold = 0; 
            if (i < rows - 1 && temp[i + 1][j] <= current) isCold = 0; 
            if (j > 0 && temp[i][j - 1] <= current) isCold = 0; 
            if (j < cols - 1 && temp[i][j + 1] <= current) isCold = 0; 

            if (isCold)
                printf("At Position (%d, %d) with Temperature %dC\n", i + 1, j + 1, current);
        }
    }
    return 0;
}


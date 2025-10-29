#include <stdio.h>

int main() 
{
	int i, j ;
    int image[4][4] =
	 {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    int inverted[4][4];
    int whiteCount = 0;

    printf("Original\t\tInverted\n");
    for ( i = 0; i < 4; i++)
	 {
        for ( j = 0; j < 4; j++)
		 {
            inverted[i][j] = !image[i][j];
            if (image[i][j] == 1)
                whiteCount++;
            printf("%d ", image[i][j]);
        }
        printf("\t\t");
        for ( j = 0; j < 4; j++)
		 {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal white pixels in original: %d\n", whiteCount);
    return 0;
}


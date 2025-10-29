#include <stdio.h>

int main()
 {
 	int i,j;
    int seating[5][5];
    int occupied = 0, empty = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            seating[i][j] = (i + j) % 2;  
        }
    }
    printf("Classroom Seating Chart (X = Occupied, 0 = Empty)\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < 5; i++) 
	{
        printf("Row %d: ", i + 1);
        for (j = 0; j < 5; j++)
		 {
            if (seating[i][j] == 1)
			 {
                printf("X ");
                occupied++;
            } else {
                printf("0 ");
                empty++;
            }
        }
        printf("\n");
    }

    int totalDesks = 5 * 5;

    printf("\nSummary:\n");
    printf("Total Desks   : %d\n", totalDesks);
    printf("Occupied Desks: %d\n", occupied);
    printf("Empty Desks   : %d\n", empty);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM1 4
#define DIM2 3
#define DIM3 3
#define DIM4 5

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Create a 4D array
    int arr[DIM1][DIM2][DIM3][DIM4];
    
    // Fill the array with auto-generated data
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                for (int l = 0; l < DIM4; l++) {
                    arr[i][j][k][l] = (double)rand() / RAND_MAX; // Generate random data between 0 and 1
                }
            }
        }
    }
    
    // Print the generated data (optional)
    printf("Generated data:\n");
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                for (int l = 0; l < DIM4; l++) {
                    printf("%d ", arr[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

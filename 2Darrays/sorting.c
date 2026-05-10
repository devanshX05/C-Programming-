#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, k, l, temp;

    // Input 2D array
    printf("Enter 9 elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sorting the 2D array
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {// i and j refers to the row and column
            for(k = 0; k < 3; k++) { //k and l refers to the current element on which it is been traverse
                for(l = 0; l < 3; l++) {
                    if(arr[i][j] < arr[k][l]) {
                        temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }

    // Display sorted array
    printf("\nSorted 2D Array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Bubble Sorting in 2D array

#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, k, l, temp;

    // Input
    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Bubble Sort
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {

            for(k = 0; k < 3; k++) {
                for(l = 0; l < 2; l++) {

                    if(arr[k][l] > arr[k][l + 1]) {

                        temp = arr[k][l];
                        arr[k][l] = arr[k][l + 1];
                        arr[k][l + 1] = temp;
                    }
                }
            }
        }
    }

    // Output
    printf("\nSorted Array:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
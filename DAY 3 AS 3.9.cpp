#include <stdio.h>

int main() {
    int array1[10] = {10, -1, 100, 90, 87, 0, 15, 10, 20, 30};
    int array2[10];
    int i, *ptr1, *ptr2;

    // Initialize pointers
    ptr1 = array1;
    ptr2 = array2;

    for (i = 0; i < 10; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    // Print the elements of both arrays
    printf("Array1: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");

    printf("Array2: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");

    return 0;
}


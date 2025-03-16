#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 10;  // Assign value

    free(ptr);  // First free (correct)
    printf("completed\n");
    //ptr=NULL;  // Safe to use to prevent segmetation fault error.
    free(ptr);  // Second free (ERROR - double free)

    printf("Program completed\n");  // This may or may not execute correctly

    return 0;
}

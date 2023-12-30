#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed the random number generator with the current time
    srand(time(NULL));
     int n = rand();

    // Print the random number
    printf("%d ", n);

    // Check if the number is positive, negative, or zero
    if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }

    return 0;
}

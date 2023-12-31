#include <stdio.h>

int main(void)
{
    int count, term1 = 1, term2 = 2, nextTerm;

    printf("%d, %d", term1, term2);

    for (count = 2; count < 50; ++count)
    {
        nextTerm = term1 + term2;
        printf(", %d", nextTerm);
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");

    return 0;
}


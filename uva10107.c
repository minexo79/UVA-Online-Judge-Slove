#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b)
{
    return *(unsigned *)a - *(unsigned *)b;
}

int main (void)
{
    unsigned n[10001], counter = 0;

    while(scanf("%d", &n[counter++]) != EOF)
    {
        qsort(n, counter, sizeof(unsigned), compare);
        if((counter % 2) > 0)
            printf("%d", n[counter / 2]);
        else
            printf("%d", (n[counter / 2 - 1] + n[counter / 2 ]) / 2);
        printf("\n");
    }

    return 0;
}
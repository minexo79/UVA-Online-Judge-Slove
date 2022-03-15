#include <stdio.h>
#include <stdlib.h>

void triangle(int m, int n)
{
    int j, k, l;
    for(j=0;j<n;j++)
    {
        for(k=1;k<=m;k++)
        {
            for(l=1;l<=k;l++)
                printf("%d", k);
            printf("\n");
        }
        for(k=m-1;k>0;k--)
        {
            for(l=1;l<=k;l++)
                printf("%d", k);
            printf("\n");
        }

        if(j != n - 1)  printf("\n");
    }
}

int main (void)
{
    int i, k;
    scanf("%d", &k);
    for(i=0;i<k;i++)
    {
        int m, n;
        scanf("%d\n%d", &m, &n);

        triangle(m, n);

        if(i != k - 1)  printf("\n");
    }

    return 0;
}
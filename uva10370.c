#include <stdio.h>
#include <stdlib.h>

float solve(int *arr, int len)
{
    /**
     * reference from: https://ringsacm.pixnet.net/blog/post/6398244-acm-10370%3A-above-average
     */
    
    int i, above_count = 0;
    float sum = 0;
    for(i=0;i<len;i++)
        sum += arr[i];

    sum /= len;

    for(i=0;i<len;i++)
        if(arr[i] > sum) above_count++;

    return (100.0 * above_count) / len;
}

int main (void)
{
    int c;
    scanf("%d", &c);
    while(c--)
    {
        int i, n;
        scanf("%d", &n);
        int *arr = (int *)calloc(n, sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);
        
        float result = solve(arr, i);

        printf("%.3f%\n", result);
    }

    return 0;
}
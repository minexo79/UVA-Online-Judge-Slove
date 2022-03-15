#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solve(int *arr, int len)
{
    if(len == 0)
        return 0;
    else if(len == 1)
        return 1;
    else
    {
        int i, res = 1, diff;
        int * diffArr = (int *)calloc(len - 1, sizeof(int));

        for(i=0;i<len-1;i++)
        {
            diff = abs(arr[i] - arr[i+1]);
            if(diff >= 1 && diff < len)
                diffArr[diff - 1] = 1;
        }

        for(i=0;i<len-1;i++)
        {
            if(diffArr[i] == 0)
            {
                res = 0;
                break;
            }
        }

        free(diffArr);
        return res; 
    }
}   

int main (void)
{
    int i, n;
    while(scanf("%d", &n) != EOF)
    {
        int *arr = (int *)calloc(n, sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);

        int ans = solve(arr, n);

        if(ans == 0)
            printf("Not jolly\n");
        else 
            printf("Jolly\n");
    }
}
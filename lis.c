#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longest_increasing_subsequence(int a[], int n)
{
    int i, j;
    int lis[n];
    int max=0;

    for(i = 0; i < n; i++)
        lis[i] = 1;

    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(a[i] > a[j] && lis[i] < lis[j]+1)
                lis[i] = lis[j]+1;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(lis[i] > max)
            max = lis[i];
    }
    return max;
}

int main()
{
    int i,n;
    printf("enter the number of array elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int result = longest_increasing_subsequence(a,n);

    printf("Number of terms in LIS is %d\n", result);
    return 0;
}

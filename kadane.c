#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n;
printf("enter the number \n");
scanf("%d",&n);
printf("enter the numbers \n");
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int tmax=0,max=0;
for(i=0;i<n;i++)
{
    tmax=tmax+a[i];
    if(tmax<0)
    {
        tmax=0;
    }
    if(max<tmax)
    {
        max=tmax;
    }
}
printf("sum of largest subarray = %d \n",max);
return 0;
}

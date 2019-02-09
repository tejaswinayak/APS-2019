#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n=3;
    char str[]={'a','b','c'};
    unsigned int len=pow(2,n);
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                printf("%c",str[j]);
            }
            printf("\n");
        }
    }
    return 0;
}

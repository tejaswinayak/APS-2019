#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the length for string\n");
    scanf("%d",&n);
    char str[n];
    printf("enter the string\n");
    scanf("%s",str);
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
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_number_of_ways(int score,int a,int b,int c)
{
    int i;
    int result[score+1];

    memset(result, 0, sizeof(int) * (score+1));

   
    result[0] = 1;


    for(i = a; i <= score; i++)
        result[i] = result[i] + result[i-a];

    for(i = b; i <= score; i++)
        result[i] = result[i] + result[i-b];

 
    for(i = c; i <= score; i++)
        result[i] = result[i] + result[i-c];

    return result[score];
}

int main()
{
    int score,a,b,c;
    printf("enter the score \n");
    scanf("%d",&score);
    printf("enter 3 numbers for ways \n");
    scanf("%d %d %d",&a,&b,&c);
    int result = count_number_of_ways(score,a,b,c);
    printf("The number of ways are:\n");
    printf("%d\n", result);

    return 0;
}

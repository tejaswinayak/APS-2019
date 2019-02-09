#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
    return b;
    }
}
int knapSack(int W, int wt[], int val[], int n) 
{ 
   
   if (n == 0 || W == 0) 
       return 0; 
  
   
   if (wt[n-1] > W) 
       return knapSack(W, wt, val, n-1); 
  
   
   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
                    knapSack(W, wt, val, n-1) 
                  ); 
} 
int main() {

    int i,j,n,c;
    printf("enter the number of items \n");
    scanf("%d",&n);
    int w[n],v[n];
    printf("enter the weights and values of %d items\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    scanf("%d",&c);
    printf("%d", knapSack(c, w, v, n));
    return 0;
}

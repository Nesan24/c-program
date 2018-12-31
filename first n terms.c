// input:
// 6
// output:
// 1 5 15 34 65 111 
// input:
// 10
// output:
// 1 5 15 34 65 111 175 260 369 505 
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
       j=i*((i*i)+1)/2;
       printf("%d ",j);
    }
    
}
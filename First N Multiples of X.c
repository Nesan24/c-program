// First N Multiples of X - Odd
// Testcase 1:
// Input:
// 10 3

// Output:
// 3 9 15 21 27 33 39 45 51 57
// Testcase 2:
// Input:
// 20 2

// Output:
// -1
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int mul;
    scanf("%d %d",&n,&mul);
    int i,count=0;
    if(mul%2==0)
    {
    printf("-1");
    }
    else
    {
    for(i=mul;;i+=mul)
    {
        if(i%2==1)
        {
            printf("%d ",i);
            count++;
            if(count==n)
            break;
        }
    }
    }
    //if(count==0)
    //printf("-1");
    // if(mul%2==0)
    // printf("-1");

}

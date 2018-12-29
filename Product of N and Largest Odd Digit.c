// Input:
// 12345
// Output:
// 61725
// Explanation:
// The largest odd digit in 12345 is 5.
// The product of 12345 and 5 is 61725. 
// Hence the output is 61725

// Input:
// 24068
// Output:
// -1

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int max=0;
    while(n>0)
    {
        int t=n%10;
        if(t%2==1&&t>max)
        {
            max=t;
        }
        n=n/10;
    }
    if(max%2==1)
    {
        printf("%d",temp*max);
    }
    else
    {
        printf("-1");
    }
}
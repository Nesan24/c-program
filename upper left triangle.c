// Input: 
// 4

// Output:
// 1 2 3 4
// 2 3 4
// 3 4
// 4

// Example Input/Output 2:
// Input: 
// 7

// Output:
// 1 2 3 4 5 6 7
// 2 3 4 5 6 7
// 3 4 5 6 7
// 4 5 6 7
// 5 6 7
// 6 7
// 7
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i, j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
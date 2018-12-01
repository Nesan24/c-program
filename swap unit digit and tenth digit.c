/*
Swap Unit & Tenth Digits
Input:
135
Output:
153
Example Input/Output 2:
Input:
-58264
Output:
-58246
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp;
    scanf("%d",&n);
    temp=n;
     printf("%d",temp/100);
         int unit=n%10;
         printf("%d",abs(unit));
         n=n/10;
         int ten=n%10;
         printf("%d",abs(ten));

}

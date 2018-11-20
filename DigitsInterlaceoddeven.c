#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    int digitcount[10]={0},numofdigits=0;
    while(n>0)
    {
        digitcount[n%10]++;
        n/=10;
        numofdigits++;
    }
    int oddDigits=9,evenDigits=8;
    int printCount=0;
    while(printCount<numofdigits)
    {
        while(digitcount[oddDigits]==0&&oddDigits>1)
        {
            oddDigits-=2;
        }
        if(digitcount[oddDigits]>0)
        {
            printf("%d",oddDigits);
            printCount++;
            digitcount[oddDigits]--;
        }
    while(digitcount[evenDigits]==0&&evenDigits>0)
    {
        evenDigits-=2;
    }
    if(digitcount[evenDigits]>0)
    {
        printf("%d",evenDigits);
        printCount++;
        digitcount[evenDigits]--;
    }
    }
}

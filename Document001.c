Input :
100 -99 98 5
Output
104
Program in c
#include <stdio.h>

int main()
{
    int sum=0;
    char inputstring[10000];
    fgets(inputstring,10000,stdin);
    char *input = inputstring;
    int offset=0;
    int currentNumber;

    while(sscanf(input,"%d%n",&currentNumber,&offset) == 1)
    {
        sum += currentNumber;
        input = input+offset;
    }

    printf("%d",sum);

}

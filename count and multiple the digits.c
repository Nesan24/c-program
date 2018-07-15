count the digits and multiple with the given number
for example
input:
12
output:
24
explanation 
 number of digits=2
12*2=24
C program
#include<stdio.h>
void main()
unsigned long long int n;
scanf("%llu",&n);
unsigned long long int count=0,k=n;
while(n!=0)
{
count++;
n=n/10;
}
printf("%llu",count*k);
} 
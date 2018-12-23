
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,check;
    scanf("%d %d",&n,&check);
    int i;
    int a[100],count1=0,count2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>check)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    //printf("%d",count1);
    //printf("%d",count2);
    for(i=0;i<n;i++)
    {
        if(count1>count2)
        {
        if(a[i]>check)
        {
            printf("%d ",a[i]);
        }
        }
        else if(count1<count2)
        {
        if(a[i]<check)
            printf("%d ",a[i]);
        }
    }


}

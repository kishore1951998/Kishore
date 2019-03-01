#include <stdio.h>

int main()
{
    int a,l=0,p=1,sum=0,rem=0,t1,t2,i;
    scanf("%d",&a);
    t1=a;
    t2=a;
    while(t1>0)
    {
        t1=t1/10;
        l++;
    }
    sum=0;
    while(t2>0)
    {
        rem=t2%10;
        p=1;
        for(i=0;i<l;i++)
        {
            p=p*rem;
        }
        sum=sum+p;
        t2=t2/10;
    }
    if(sum==a)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}

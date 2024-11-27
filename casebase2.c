#include<stdio.h>
void main()
{
    int i,n,count,b;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<5;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        b=n%10;
        if(n%b==0)
        {
            count++;
        }
        n=n/10;
        if(n==0)
        {
            break;
        }
        
    }
    printf("%d is number positions  ",count);
}
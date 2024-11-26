// program to find factor of any
#include<stdio.h>
int main ()
{
int a,b,i;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b=a%i;
if(b==0)
printf("\n%d",i);
}
return 0;
}
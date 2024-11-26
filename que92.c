//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include<stdio.h>
void main()
{
    int n,max=0,i;
    printf("enter number of element");
    scanf("%d",&n);
    int a[n];
    int *p;
    printf("enter those numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     p =&a[0];
     for(i=0;i<n;i++)
     {
        if(max<(*(p+i)))
        {
            max=*(p+i);
        }
     }
     printf("%d",max);
}
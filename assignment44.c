//prograam to print amount paid by consumer
#include<stdio.h>
int main()
{
    float unit,charg;
    printf("enter your consuption in unit");
    scanf("%f",&unit);
    if(unit<=200 && unit>=0)
        printf("charge is %f rs",unit*0.5);
    else if(unit<=400 && unit>=210)
    printf("charge is %f rs",(((unit-200))*0.65)+100);
    else if(unit<=600  && unit>=400)
    printf("charge is %f rs",(((unit-400))*0.80)+230);
     else
     printf("charge is %f",(((unit-600)*125))+425);
    return 0;
}


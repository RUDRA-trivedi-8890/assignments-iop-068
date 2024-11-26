// program to calculate commision

#include <stdio.h>

int main() {
    float sales, commission;

    printf("Enter the number of sales: ");
    scanf("%f", &sales);

    if (sales <= 500) {
        commission = sales / 20;
    } 
    else if (sales > 500 && sales <= 2000) {
        commission = (sales / 10) + 10;
    } 
    else if (sales > 2000 && sales <= 5000) {
        commission = (sales * 0.12) + 185;
    } 
    else {
        commission = sales * 0.125;
    }

    printf("Commission is %.2f\n", commission);
    
    return 0;
}
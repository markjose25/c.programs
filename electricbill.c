/*
Mark joseph wanyeri 
CT101/G/26443/25
program to calculate water bill
Date 20/10/2025
*/
#include <stdio.h>

// function 
float calculateElectricBill(int units) {
    float bill;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;

    return bill;
}

int main() {
    int units;
    printf("Enter number of units consumed:\n ");
    scanf("%d", &units);

    printf("Total electricity bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}
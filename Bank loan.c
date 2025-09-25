//Simple c program (Juliet Wanyingi)
/*
Name: Juliet
Reg no:26486
Date:22/9/2025
Description:bank loan program

*/
#include <stdio.h>
int main() {
    int age;
    float income;

    // prompt user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    //prompt user to enter annual income 
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
        }else{
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
    }
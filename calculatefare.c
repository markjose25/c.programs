
/*
Mark joseph wanyeri 
CT101/G/26443/25
program to calculate fare 
Date 20/10/2025
*/
#include <stdio.h>

// function 
float calculate_fare(float distance) {
    float fare;

    fare=distance*50;

    return fare;
}

int main() {
    float distance;
    //prompt the user to enter distance 
     printf("Enter the distance covered in kilometres:\n ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculate_fare(distance));
    return 0;
}
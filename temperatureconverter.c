
/*
Mark joseph wanyeri 
CT101/G/26443/25
program to convert Fahrenheit_to_celsius 
Date 20/10/2025
*/
#include <stdio.h>

// function 
float convert_to_celsius(float Fahrenheit) {
    float Celsius;
    
    
    return (Fahrenheit-32)*5/9;
}

int main() {
    
    float Fahrenheit;
    
        //prompt the user to endist Fahrenheit
     printf("Enter temperature in Fahrenheit \n ");
    scanf("%f", &Fahrenheit);

    printf("Total temperature in Celsius =  %.2f\n", convert_to_celsius(Fahrenheit));
    return 0;
}
// surface area and volume 
/*
Mark Joseph wanyeri 
REG.CT101/G/26443/25
date 9/23/2025
calculations of volume and surface area 
*/
#include<stdio.h> 
#define PI 3.142

int main()
{

float radius,height,volume,surfaceArea;

//prompt the user to enter height 
    printf("Enter height of the cylinder:");
    scanf ("%f",&height);
    
    //prompt the user to enter radius 
    printf ("\n enter radius of the cylinder:");
    scanf("%f",&radius);
    
   //computer interest   
   volume=PI*radius *radius*height;
   surfaceArea=2*PI*radius*radius+2*PI*radius*height;
   
   printf("\n volume of the cylinder is %.4f",volume);   
   
   printf("\n surfaceArea of the cylinder is %.4f",surfaceArea);
      return 0;
}
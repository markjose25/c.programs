 
/*
Mark Joseph wanyeri 
REG.CT101/G/26443/25
date 9/23/2025

*/
#include<stdio.h> 

int main()
{
//variable declaration 
int age;
float  salary ;

//prompt user to enter age 
printf("Enter your age :");
scanf("%d",&age);
 
 //prompt user to enter salary 
 printf("Enter your  annual salary");
 scanf("%f",&salary);

//check eligibility 
if(age>=21 && salary >=21000){
printf("congratulations you are qualified for the loan .\n");
}else{
printf("unfortunately we are unableto give you a lone at this time .\n");
}
      return 0;
}

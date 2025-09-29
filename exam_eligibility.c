/* mark joseph wanyeri 
Reg :CT101/G/26443/25
date 28/5/2025
A program to check exam eligibility 
if astuident have more than 75% attendance and have more than 40 marks then they qualify for the exam 
otherwise they are not qualified
*/
#include<stdio.h>
int main (){
// variable declaration 
float attendance;
float marks;
 
//prompt the user to enter attendance 
printf("what is your attendance ");
scanf("%f",&attendance);

//prompt the user to enter marks 
printf("How many marks do you have ?");
scanf("%f",&marks);

//check eligibility 
if(attendance >=0.75 && marks>=40){
printf("you qualify for the exam\n ");
}else{
printf("you do not qualify for the exam try next time and work smarter");
}
return 0 ;
}

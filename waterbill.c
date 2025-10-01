/* mark joseph wanyeri 
Reg :CT101/G/26443/25
date 28/5/2025
A program to to know calculate water bills 
*/
#include<stdio.h>
int main (){
// variable declaration 
float units;
float bill;
 float amount_payable;
//prompt the user to enter units consumed 
printf("please enter the units consumed ");
scanf("%f",&units);

//for computer usage
//calculate water bill
if(units<=30){
bill=20*units;
}
else if(units>=31 && units<=60){
bill=25*units;
}
else{
bill=30*units;
}

amount_payable =bill;
//show results 
printf("\n total water bill is ksh%.2f",bill);
return 0 ;
}
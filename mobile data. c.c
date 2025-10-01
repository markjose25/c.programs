/* mark joseph wanyeri 
Reg :CT101/G/26443/25
date 28/5/2025
A program to purchase mobile data 
*/
#include<stdio.h>
int main (){
// variable declaration 
float bundle;
float cost;
 int option;

//the table show how bundle varies
printf("Option MB.        Cost\n");
printf("1.    100MB.    ksh50\n");
printf("2.     500MB.    KSH200\n");
printf("3.     1GB.       ksh350\n");
printf("4.     2GB.       KSH600\n");

//prompt user to enter option 
printf("please enter your option  only from 1 _4\n");
scanf("%d",&option);

//use switch to show option selected 
switch (option){
case 1:
printf("you have selected  100MB  for ksh50\n");

break;

case 2:
printf("you have selected 500MB for ksh200\n");

break;

case 3:
printf("you have selected 1GB for ksh350\n");

break;

case 4:
printf("you have selected 2GB for ksh600\n");

break;

default:
printf("invalid option please try an option between 1 and 4\n");
}

printf("\nwould you like to continue with the perchase of this data\n");
return 0 ;
}
/* mark joseph wanyeri 
Reg :CT101/G/26443/25
date 8/10/2025
A program of ATM withdrawal 
*/
#include<stdio.h>
int main (){
// variable declaration 
float balance=5000;
float withdrawal;


while(balance>0){
printf(" your currently balance in the account is ksh.%f\n",balance);
printf("\n Enter the amount to withdrawal\n");
scanf("%f",&withdrawal);
if(withdrawal>balance){
printf("\nyou have insufficient funds in your account please try a lower amount \n");
break;
}
balance-=withdrawal;
}
printf("\n your final balance in the account is :ksh.%f\n",balance);

return 0 ;
}
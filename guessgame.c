/* mark joseph wanyeri 
Reg :CT101/G/26443/25
date 8/10/2025
A program for number guessing game
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
int secret_number= rand ()%20+1;
int guess;
int attempt=0;

printf("welcome to the number guessing game \n");
printf("I  have chosen a number between 1 and 20\n try to guess the number \n");
do{
printf("Enter your guessed number\n");
scanf("%d",&guess);

attempt++;

if(guess>secret_number){
printf("Too high!\n");
}else if (guess<secret_number){
printf("Too low !\n");
}else{
printf("congratulations you guessed the correct number in %d attempt\n",attempt);
}
}while(guess!=secret_number);
return 0 ;
}
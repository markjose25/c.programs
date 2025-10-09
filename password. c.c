/* mark joseph wanyeri 
Reg :CT101/G/26443/25
date 8/10/2025
A program system for entering password 
*/
#include <stdio.h>
#include <string.h>

int main ()
{
char password[20];
const char correctpassword []="1234";
do {
printf("please enter your password\n");

scanf("%s",&password);
if(strcmp(password,correctpassword)!=0){ 
printf("incorrect password. \n please try again\n");
}
}while (strcmp(password ,"1234") !=0);

printf("\naccess is granted\n");


return 0 ;
}
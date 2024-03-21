#include<stdio.h>

int main(){

//created two integer type variables to store user input
int a,b;



printf("Enter the first and second number :\n");

//scanf is used to read the value entred by the user and store it in a and b
scanf("%d%d",&a,&b);

printf("Result :- %d",a+b);
//addition is performed using + and result is displayed on the position of %d

return 0;
}
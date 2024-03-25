#include<stdio.h>

int main(){
	int age;
	printf("Enter the Year of Birth of the user");
	scanf("%d",&age);
	age=2024-age;	

/*if else condition is used here .it performm the logical operation. here the if block checks wether the age of user is less than 18 if the condition is satisfied the program is executed else ,The Else part is executed*/
	if(age<18){
		printf("The user is not eligble to vote");
	}
	else{
		printf("User is eligble to vote");
	}
	return 0;
}

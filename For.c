#include<stdio.h>

int main(){
	int n,i;
	
	printf("Enter the toatal no of natural numbers you want to print");
	scanf("%d",&n);


/*for loop is implemented here the condition that needs to satisfy for the loop to execute
is the value of i less than the no of natural numbers user want on this condition the code written inside the loop is executed */
	

	for(i=0;i<n;i++){
		printf("%d ,",i);
	}
	return 0;
}

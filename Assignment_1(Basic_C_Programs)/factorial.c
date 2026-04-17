#include<stdio.h>
int factorial(int num)
{
	if(num==1 || num==0) {
        return 1;
    }
	else{
        return num*factorial(num-1);
    }	
}
int main(){
	int num;
	printf("Enter a number to get it's factorial: ");
	scanf("%d",&num);
	printf("factorial of the inputted number is: %d",factorial(num));
	return 0;
}
#include<stdio.h>
int GCD(int num1,int num2)
{
	while(num1!=num2){
		if(num1>num2) num1=num1-num2;
		else num2=num2-num1;
	}
	return num1;
}
int main(){
	int num1,num2;
	printf("Enter two numbers to get their gcd: ");
	scanf("%d %d",&num1,&num2);
	printf("GCD of the two numbers is : %d",GCD(num1,num2));
	return 0;
}
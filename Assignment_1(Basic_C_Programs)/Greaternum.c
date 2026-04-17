#include<stdio.h>
int returnGreater(int num1,int num2)
{
	if (num1>=num2){
        return num1;
    }
    else{
        return num2;
    }
}
int main(){
	int num1,num2;
	printf("Enter numbers to compare for the greatest: ");
	scanf("%d%d",&num1, &num2);
	printf("The greatest of the two numbers is %d",returnGreater(num1,num2));
	return 0;
}
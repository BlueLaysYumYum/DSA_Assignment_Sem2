#include<stdio.h>
int Square(int num)
{
	return num*num;	
}
int main(){
	int num;
	printf("Enter a number to get it's square: ");
	scanf("%d",&num);
	printf("The square of the number is %d",Square(num));
	return 0;
}
#include<stdio.h>
float add(float num1,float num2)
{
	return num1+num2;
}
float subtract(float num1,float num2)
{
	return num1-num2;
}
float mult(float num1,float num2)
{
	return num1*num2;
}
float div(float num1,float num2)
{
	return num1/num2;
}
float main(){
	float num1,num2;
	printf("Enter two numbers to perform basic operations: ");
	scanf("%f %f",&num1,&num2);
	printf("The sum of %.3f and %.3f is %.3f\n",num1,num2,add(num1,num2));
	printf("The difference of %.3f and %.3f is %.3f\n",num1,num2,subtract(num1,num2));
	printf("The product of %.3f and %.3f is %.3f\n",num1,num2,mult(num1,num2));
	printf("The divsion of %.3f and %.3f is %.3f\n",num1,num2,div(num1,num2));
	return 0;
}
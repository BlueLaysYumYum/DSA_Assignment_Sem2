#include<stdio.h>
void fibonnaci(int num)
{
	int first,second,third;
	first=0;
	second=1;
	while(first<num){
		printf("%d\n",first);
		third=first+second;
		first=second;
		second=third;
	}
}
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	fibonnaci(num);
}
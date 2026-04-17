#include <stdio.h>
void Armstrong(int num)
{
	int i,sum=0,digit,temp,original,count=0;
	temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    temp = num;
	while(temp>0){
		digit=temp%10;
		int f_digit=1;
		for(i=1;i<=count;i++){
			f_digit*=digit;
		}
		sum+=f_digit;
		temp=temp/10;
	}
	if(num==sum) {
        printf("it is an armstrong number");
    }
	else {
        printf("it is not an armstrong number");
    }
}
int main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	Armstrong(num);
	return 0;
}
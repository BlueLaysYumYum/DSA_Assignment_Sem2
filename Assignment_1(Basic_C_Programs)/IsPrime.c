#include <stdio.h>
int isPrime(int num)
{
    for (int i=2;i<=(num/2);i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i,num,primeflag;
    printf("Enter a number to check if it's prime: ");
    scanf("%d",&num);
    primeflag=isPrime(num);
    if(primeflag==1){
            printf("the given number is a prime number");
        }
    else {
        printf("the given numeber is not a prime");
    }
    return 0;
}
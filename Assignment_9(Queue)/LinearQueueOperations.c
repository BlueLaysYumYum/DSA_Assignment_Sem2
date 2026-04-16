// Code to perform Insertion, Deletion and Display operation in a linear queue (Menu Driven)
#include <stdio.h>
#define size 10
int front = -1;
int rear = -1;
void insert(int LQ[], int val){
    if (rear==size-1){
        printf("Queue overflow\n");
        return;
    }
    if (front==-1){
        front++,rear++;
        LQ[rear]=val;
    }
    else{
        rear++;
        LQ[rear]=val;
    }
}
void delete(int LQ[]){
    if (front==rear){
        if (rear==-1){
            printf("Queue underflow\n");
        }
        else{
            rear = front = -1;
        }
    }
    else{
        front++;
    }
}
void display(int LQ[]){
    int i;
    printf("[");
    for (i=front;i<=rear;i++){
        printf("%d, ", LQ[i]);
    }
    printf("]\n");
}
int main (void){
    int LQ[size],val,choice;
    do{
        printf("Enter operation : \n1-Insertion\n2-Deletion\n3-Display\n4-Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to insert ");
            scanf("%d",&val);
            insert(LQ,val);
            break;
        case 2:
            delete(LQ);
            break;
        case 3:
            display(LQ);
            break;
        case 4:
            return 0;    
        default:
            printf("Invalid choice");
            break;
        }
    }while (choice!=4);
    return 0;
    
}
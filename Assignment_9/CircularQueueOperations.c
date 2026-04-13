// Code to perform Insertion, Deletion and Display operation in a linear queue (Menu Driven)
#include <stdio.h>
#define size 10
int front = -1;
int rear = -1;
void insert(int CQ[], int val){
    if (((rear==size-1)&&(front==0))||(front==rear+1)){
        printf("Queue overflow\n");
        return;
    }
    if (front==-1){
        front++,rear++;
        CQ[rear]=val;
    }
    else{
        rear++;
        rear%=size;
        CQ[rear]=val;
    }
}
void delete(int CQ[]){
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
        front%=size;
    }
}
void display(int CQ[]){
    int i;
    printf("[");
    if (front<=rear){
        for (i=front;i<=rear;i++){
        printf("%d, ", CQ[i]);
        }
    }
    else {
        for (i=front;i<size;i++){
        printf("%d, ", CQ[i]);
        }
        
        for (i=0;i<=rear;i++){
        printf("%d, ", CQ[i]);
        }
    }
    printf("]\n");
}
int main (void){
    int CQ[size],val,choice;
    do{
        printf("Enter operation : \n1-Insertion\n2-Deletion\n3-Display\n4-Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d",&val);
            insert(CQ,val);
            break;
        case 2:
            delete(CQ);
            break;
        case 3:
            display(CQ);
            break;
        case 4:
            return 0;    
        default:
            printf("Invalid choice\n");
            break;
        }
    }while (choice!=4);
    return 0;
    
}
#include <stdio.h>
int top=-1;
int main (void){
    int S[50],maxStack,elem,till,i,choice;
    printf("Enter stack size: ");
    scanf("%d", &maxStack);
    printf("How many elements you want to insert: ");
    scanf("%d",&till);
    for(i=0;i<till;i++){
        printf("Enter value: ");
        scanf("%d",&elem);
        if (top==maxStack-1){
            printf("Stack Overflow\n");
        }
        else{
            top++;
            S[top]=elem;
        }
    }
    do{
        printf("Enter operation : \n1-Push\n2-Pop\n3-Display\n4-Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to insert ");
            scanf("%d",&elem);
            if (top==maxStack-1){
                printf("Stack Overflow\n");
                break;
            }
            top++;
            S[top]=elem;
            break;
        case 2:
            if (top==-1){
                printf("Stack Underflow\n");
                break;
            }
            printf("%d ",S[top]);
            top--;
            break;
        case 3:
            int i;
            printf("Stack elements are: ");
            for(i=top;i>=0;i--){
                printf("%d ",S[i]);
            }
            printf("\n")
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

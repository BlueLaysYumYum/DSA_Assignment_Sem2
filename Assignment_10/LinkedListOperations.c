// Program to create  a single linked list and perform the following operations (Menu driven) - 1>Traversing 2>Insertion 3>Deletion 4>Searching 5>Reversing
#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *link;
};
int main(void) {
    int ch,item,pos,count;
    struct node *start, *ptr, *fresh;
    start = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    do {
        printf("Enter info : ");
        scanf("%d", &ptr->info);
        ptr->link = NULL;
        printf("do you want to continue \n1 for yes \n0 for no\n");
        scanf("%d",&ch);
        if (ch==1) {
            fresh = (struct node *)malloc(sizeof(struct node));
            ptr->link = fresh;
            ptr = fresh;
        }
        else {
            break;
        }
    }while(ch==1);
    do {
        printf("enter operation : \n1-Traversing\n2-Insertion\n3-Deletion\n4-Searching\n5-Reversing\n6-Exit\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                ptr=start;
                printf("Traversing list\n");
                while (ptr!=NULL) {
                    printf(" %d -> ", ptr->info);
                    ptr=ptr->link;
                }
                printf("NULL\n");
                break;
            case 2:
                printf("Enter element to insert:");
                scanf("%d",&item);
                printf("Enter the position you want to insert at:");
                scanf("%d",&pos);
                fresh = (struct node *)malloc(sizeof(struct node));
                ptr = start;
                fresh->info=item;
                fresh->link=NULL;
                if (ptr==NULL && pos!=1) {
                    printf("not enough elements\n");
                }
                else if (pos==1) {
                    fresh->link=start;
                    start=fresh;
                }
                else {
                    count=1;
                    while (count!=pos-1 && ptr!=NULL) {
                        count++;
                        ptr=ptr->link;
                    }
                    if (ptr==NULL) {
                        printf("there are not enough elements\n");
                        break;
                    }
                    fresh->link=ptr->link;
                    ptr->link=fresh;
                }
                break;
            case 3:
                printf("Enter the position for deletion:");
                scanf("%d",&pos);
                struct node *prev;

                if (start==NULL) {
                    printf("not enough elements\n");
                    break;
                }
                if (pos==1) {
                    ptr=start;
                    start=ptr->link;
                    free(ptr);
                }
                else {
                    ptr=start;
                    prev=NULL;
                    count=1;
                    while (count!=pos && ptr!=NULL) {
                        prev=ptr;
                        ptr=ptr->link;
                        count++;
                    }
                    if (ptr==NULL) {
                        printf("there are not enough elements\n");
                        break;
                    }
                    prev->link=ptr->link;
                    free(ptr);
                }
                break;
            case 4:
                printf("Enter the item you want to search for:");
                scanf("%d",&item);
                ptr = start;
                while (ptr != NULL && ptr->info!=item) {
                    ptr=ptr->link;
                }
                if (ptr==NULL) {
                    printf("element is not present\n");
                    break;
                }
                else if (ptr!=NULL && item==ptr->info) {
                    printf("element found\n");
                }

                break;
            case 5:
                printf("Reversing the list:\n");
                int Stack[100],top=-1;
                ptr=start;
                while (ptr!=NULL) {
                    top++;
                    Stack[top]=ptr->info;
                    ptr=ptr->link;
                }
                while (top!=-1) {
                    printf("%d<-",Stack[top]);
                    top--;
                }
                break;
            default:
                printf("Enter a valid operation\n");
                break;
        }
    }while(ch!=6);
    return 0;
}


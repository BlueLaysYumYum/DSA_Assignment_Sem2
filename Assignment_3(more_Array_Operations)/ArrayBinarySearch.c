#include <stdio.h>
void BinSearch(int A[],int size,int val){
    int i;
    int low=0, high=size-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if (A[mid]==val){
            printf("Element found at index %d",mid);
            return;
        }
        else if(A[mid]<val){
            low=mid+1;
        }
        else if (A[mid]>val){
            high=mid-1;
        }
        
    }
    printf("Element not found"); 
}
    
int main (void){
    int A[50],i,size,val;
    printf("Input the size: ");
    scanf("%d",&size);
    printf("Input array elements\n");
    for (i=0;i<size;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }
    printf("Input the value you want to search: ");
    scanf("%d",&val);
    BinSearch(A, size, val);
    
}
//Code to perform insertion sort in an array
#include <stdio.h>
void SelectionSort(int A[],int size){
    int temp,i,j,min;
    for(i=0;i<size;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    
    return;
}
int main (void){
    int A[50],i,size;
    printf("Input the size: ");
    scanf("%d",&size);
    printf("Input array elements\n");
    for (i=0;i<size;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }

    printf("Unsorted Array [",i);
        for (i=0;i<size;i++){
            printf("%d, ",A[i]);
        }
    printf("]\n");
    SelectionSort(A,size);
    printf("sorted Array [",i);
    for (i=0;i<size;i++){
        printf("%d, ",A[i]);
    }
    printf("]\n");    
    return 0;
}
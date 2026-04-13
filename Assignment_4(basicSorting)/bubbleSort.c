//Code to perform insertion sort in an array
#include <stdio.h>
void bubbleSort(int A[],int size){
    int temp,i,j;
    for(i=1;i<=size;i++){
        for(j=0;j<size-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
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
bubbleSort(A,size);
printf("sorted Array [",i);
    for (i=0;i<size;i++){
        printf("%d, ",A[i]);
    }
printf("]\n");
return 0;
}
//Code to perform insertion sort in an array
#include <stdio.h>
void InsertionSort(int A[],int size){
    int temp,i,j;
    for(i=1;i<size;i++){
        j=i;
        while((j>0)&&(A[j]<A[j-1])){
            temp=A[j];
            A[j]=A[j-1];
            A[j-1]=temp;
            j--;
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
InsertionSort(A,size);
printf("sorted Array [",i);
    for (i=0;i<size;i++){
        printf("%d, ",A[i]);
    }
printf("]\n");
return 0;
}
//Code to perform Quick sort in an array
#include <stdio.h>
void Quicksort(int A[],int low,int high){
    int temp,i,j,p=A[(low+high)/2],l=low,h=high;;
    while (l<=h){
        printf("1");
       while(A[l]<p){
        l++;
        printf("2");
       }
       while(p<A[h]){
        h--;
        printf("3");
       }
       if(l<=h){
        temp=A[l];
        A[l]=A[h];
        A[h]=temp;
        l++,h--;
    }
    }
       if (low<h){
        Quicksort(A,low,h);
       }
       if (l<high){
        Quicksort(A,l,high);
       }
    
    return;
    }
    
int main (void){
    int A[50],i,low,high;
    printf("Input lower limit: ");
    scanf("%d",&low);
    printf("Input upper limit: ");
    scanf("%d",&high);
    printf("Input array elements\n");
    for (i=0;i<high;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }

printf("Unsorted Array [",i);
    for (i=0;i<high;i++){
        printf("%d, ",A[i]);
    }
printf("]\n");
Quicksort(A,low,high-1);
printf("sorted Array [",i);
    for (i=0;i<high;i++){
        printf("%d, ",A[i]);
    }
printf("]\n");
return 0;
}
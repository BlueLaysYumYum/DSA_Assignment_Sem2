#include <stdio.h>
void MatrixTraversal(int A[][20],int rows,int columns){
    int i,j;
    printf("Array:\n");
    for (i=0;i<rows;i++){
        printf("[");
        for (j=0;j<columns;j++){
            printf("%d ",A[i][j]);
        }
        printf("]\n");
    }
}
int main (void){
    int A[20][20],i,j,rows,columns;
    printf("Enter the number of rows and columns for the array: ");
    scanf("%d%d",&rows,&columns);
    printf("Input Array elements:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            printf("Enter for [%d][%d]th index: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    MatrixTraversal(A,rows,columns);
}
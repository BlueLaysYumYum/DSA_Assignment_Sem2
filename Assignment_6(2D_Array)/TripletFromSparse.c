#include <stdio.h>
void SparsetoTriplet(int A[][20],int rows,int columns){
    int i,j,nz;
    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            if(A[i][j]!=0){
                nz++;
            }
        }
    }
    if (nz<((rows*columns)/2)){
        int k=1, T[20][3];
        T[0][0]=rows;
        T[0][1]=columns;
        T[0][2]=nz;
        for (i=0;i<rows;i++){
            for (j=0;j<columns;j++){
                if(A[i][j]!=0){
                    T[k][0]=i;
                    T[k][1]=j;
                    T[k][2]=A[i][j];
                    k++;
                }
            }
        }
        printf("The sparse matrix is:\n");
        for(i=0;i<=nz;i++){
            printf("[");
            for(j=0;j<3;j++){
                printf("%d ",T[i][j]);
            }
            printf("]\n");
        }
        
    }
    else{
        printf("Not a sparse matrix\n");
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
    SparsetoTriplet(A,rows,columns);
}
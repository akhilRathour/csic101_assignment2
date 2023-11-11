#include <stdio.h>
void in_matrix(int arr[][3],int n){
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        printf("enter %d,%d element",i,j);
        scanf("%d",&arr[i][j]);
    }}

}
void print_matrix(int arr[][3],int n){
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");}
}
int isIdentityMatrix(int mat[][3], int n) {
    if (n != 3) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
     int n=3;
    printf("enter matrix 1\n");
    int arr1[3][3];
    in_matrix(arr1,n);
   

    printf("matrix 1 is\n");
    print_matrix(arr1,n);
if(isIdentityMatrix(arr1,n)){
printf("matrix is identity\n");

}
else{
    printf("matrix is mot an identity matrix\n");
}
    

    return 0;
}

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
int MatricesEqual(int mat1[][3], int mat2[][3], int rows, int cols) {
    if (rows != 3 || cols != 3) {
        return 0; 
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0; 
            }
        }
    }

    return 1; }

int main() {
    int mat1[3][3];
    int mat2[3][3] ;
printf("enter matrix 1\n");
in_matrix(mat1,3);
printf("enter matrix 2\n");
in_matrix(mat2,3);
printf("matrix 1 is\n");
print_matrix(mat1,3);
printf("matrix 2 is\n");
print_matrix(mat2,3);

    if (MatricesEqual(mat1, mat2, 3, 3)) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}

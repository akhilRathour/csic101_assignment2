#include<stdio.h>
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
void matrix_multipli(int arr1[][3], int arr2[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += arr1[i][j] * arr2[j][k];
            }
            printf("%d\t", sum);
        }
        printf("\n");
    }
}

int main(){
     int n=3;
    printf("enter matrix 1\n");
    int arr1[3][3];
    in_matrix(arr1,n);
    printf("enter 2nd matrix\n");
    int arr2[3][3];
    in_matrix(arr2,n);

    printf("matrix 1 is\n");
    print_matrix(arr1,n);
    printf("matrix 2 is\n");
    print_matrix(arr2,n);
    printf("multiplied matrix \n");
    matrix_multipli(arr1,arr2,n);
    return 0;
}
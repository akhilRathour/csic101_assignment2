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
void lower_tri_matrix(int arr[][3]){
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            arr[i][j]=0;
        }
    }
}

int main(){
     int n=3;
    printf("enter matrix \n");
    int arr1[3][3];
    in_matrix(arr1,n);
    
    printf("matrix is\n");
    print_matrix(arr1,n);
  printf("lower triangular is\n");
lower_tri_matrix(arr1);
 print_matrix(arr1,n);
    return 0;
}
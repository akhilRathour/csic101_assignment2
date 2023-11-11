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
int sum_right_diagonal(int matrix[3][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=matrix[i][i];
    }
    return sum; 
}

int main(){
     int n=3;
    printf("enter matrix \n");
    int arr1[3][3];
    in_matrix(arr1,n);
    
    printf("matrix is\n");
    print_matrix(arr1,n);
   printf("sum of right diagonal is=%d",sum_right_diagonal(arr1));

    return 0;
}
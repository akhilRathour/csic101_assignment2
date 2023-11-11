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


int main(){
     int n=3;
    printf("enter matrix \n");
    int arr1[3][3];
    in_matrix(arr1,n);
    
    printf("matrix is\n");
    print_matrix(arr1,n);
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=arr1[i][j];

    }
    printf("sum of %d row is %d\n",i+1,sum);
  }
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=arr1[j][i];

    }
    printf("sum of %d column is %d\n",i+1,sum);
  }

    return 0;
}
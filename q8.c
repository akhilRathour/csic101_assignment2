#include<stdio.h>

void input_arr(int arr[],int n){
for(int i=0;i<n;i++){
    printf("enter %d element\n",i+1);
        scanf("%d",&arr[i]);
    }
}
void print_arr_bar(int arr[],int n){
    for(int j=0;j<n;j++){
printf("%d\t",j);
    for(int i=0;i<arr[j];i++){
    printf("*");
        
    }
    printf("\n");}
}
    int main(){
        int n;
        printf("enter no. of element in array");
        scanf("%d",&n);
        int arr[n];
        input_arr(arr,n);
        print_arr_bar(arr,n);
        
    

return 0;
}
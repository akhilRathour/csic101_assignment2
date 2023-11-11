#include<stdio.h>
void input_arr(int arr[],int n){
for(int i=0;i<n;i++){
    printf("enter %d element\n",i+1);
        scanf("%d",&arr[i]);
    }
}
void print_arr_rev(int arr[],int n){
    for(int i=n-1;i>-1;i--){
    printf("%d\n",arr[i]);
    }
    }
    int main(){
        int n;
        printf("enter n");
        scanf("%d",&n);
        int arr[n];
        input_arr(arr,n);
        printf("array in reverse\n");
        print_arr_rev(arr,n);
    

return 0;
}
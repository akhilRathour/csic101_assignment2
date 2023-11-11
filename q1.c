#include<stdio.h>
void input_arr(int arr[],int n){
for(int i=0;i<n;i++){
    printf("enter %d element\n",i+1);
        scanf("%d",&arr[i]);
    }
}
void print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
        
    }
}
void reverse_array_copy(int arr[],int arr2[],int n){
    for(int i=n-1;i>-1;i--){
        arr2[n-1-i]=arr[i];
    }
}

    int main(){
    int n;
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    input_arr(arr,n);
    printf("entered array is\n");
    print_arr(arr,n);
    int arr2[n];
    reverse_array_copy(arr,arr2,n);
    printf("reversed array is\n");
    print_arr(arr2,n);
    


return 0;
}
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
    int main(){
    int arr[10];
    int n=10;
input_arr(arr,n);

    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    } 
    printf("%d",sum);
    for(int i=0;i<n;i++){
        arr[i]=3*arr[i];
    }
    print_arr(arr,n);
    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
            printf("%dX%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }


return 0;
}
#include <stdio.h>
void input_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element\n", i + 1);
        scanf("%d", &arr[i]);
    }
}
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void pop_arr(int arr[],int n,int a){
    for(int i=a;i<n;i++){
arr[i]=arr[i+1];
    }
}
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array\n");
    input_arr(arr, n);
    printf("entered array is :");
    print_arr(arr, n);
printf("enter the index you wanna delete\n");
int a;
scanf("%d",&a);
pop_arr(arr,n,a);
 printf("array after deletion is :");
    print_arr(arr, n-1);


    return 0;
}
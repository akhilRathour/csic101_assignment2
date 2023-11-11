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
int index_sorted_arr(int arr[],int n,int a){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[mid]<a){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return mid;
}
void insert_sorted_arr(int arr[],int inserted_arr[],int n,int a)
{
    int index=index_sorted_arr(arr,n,a);
    for(int i=0;i<=index;i++){
        inserted_arr[i]=arr[i];

    }
    inserted_arr[index+1]=a;
    for(int i=index+1;i<n;i++){
        inserted_arr[i+1]=arr[i];
    }
}
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array in ascending orde\n");
    input_arr(arr, n);
    printf("entered array is :");
    print_arr(arr, n);
printf("enter the element you wanna insert\n");
int a;
scanf("%d",&a);
int inserted_arr[n+1];
insert_sorted_arr(arr,inserted_arr,n,a);
 printf("array after insertion is :");
    print_arr(inserted_arr, n+1);


    return 0;
}
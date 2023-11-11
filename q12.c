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

void frequency_arr(int arr[], int n)
{
    int count[n];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i-1; j > -1; j--)
        {
            if (arr[j] == arr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            {
                printf("frequency of %d element is: %d\n", arr[i], count[i]);
            }
        }
    }
}
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    input_arr(arr, n);
    printf("entered array is :");
    print_arr(arr, n);
    frequency_arr(arr, n);

    return 0;
}
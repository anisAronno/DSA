#include <stdio.h>

int avg(int arr[])
{
    int sum = 0;
    int i;
    for (i = 0; i < arr[i]; i++)
    {
        sum += arr[i];
    }

    return sum / i;
}
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}
int sum_array_elements(int arr[], int n)
{
    if (n < 0)
    {
        // base case:
        return 0;
    }
    else
    {
        // Recursion: calling itself
        return arr[n] + sum_array_elements(arr, n - 1);
    }
}
int max(int arr[])
{
    int max = arr[0]; 
    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int min(int arr[])
{
    int min = arr[0]; 
    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
int main()
{
    int my_arr[] = {20, 13, 14, 56, 56, 67, 78, 56, 1, 89, 234};
    int size= sizeof(my_arr)/sizeof(my_arr[0]);
    printf("Sum is %d \n", sum(my_arr, size));

    printf("Sum value with recursive %d \n", sum_array_elements(my_arr, size));

    printf("Avarage is %d \n", avg(my_arr));
    
    printf("Size is %d \n", size);


    printf("Max Value is %d \n", max(my_arr));

    printf("Min Value is %d \n", min(my_arr));


    return 0;
}
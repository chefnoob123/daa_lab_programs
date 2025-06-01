#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        const int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5] = {84,65,32,15,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    print_array(arr, n);
}
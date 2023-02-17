#include <stdio.h>

void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quicksort(int arr[], int low, int high);

int main()
{

    int arrsize;
    printf("Enter the size of Array :  ");
    scanf("%d", &arrsize);

    printf("Enter the element of array : ");
    int arr[arrsize];
    for (int i = 0; i < arrsize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("before sort: ");
    for (int i = 0; i < arrsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quicksort(arr, 0, arrsize - 1);

    printf("after sort: ");
    for (int i = 0; i < arrsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(arr, low, high);
        quicksort(arr, low, pivot_index - 1);
        quicksort(arr, pivot_index + 1, high);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

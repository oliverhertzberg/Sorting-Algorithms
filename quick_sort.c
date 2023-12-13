#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high)
{
    int i = low;
    int j = low;
    int pivot = arr[high];

    while (j < high)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
        j++;
    }
    swap(&arr[i], &arr[high]);
    return (i);
}

void    quick_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main(int argc, char *argv[])
{
    int N;
    int *arr;

    N = argc - 1;
    arr = malloc(sizeof(int) * N);
    if (!arr)
    {
        write(STDERR_FILENO, "Memory allocation failed\n", 26);
        return (1);
    }

    for (int i = 0; i < N; i++)
        arr[i] = atoi(argv[i + 1]); 
    printf("Unsorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    quick_sort(arr, 0, N - 1);

    printf("\nSorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    free (arr);
    return 0;
}
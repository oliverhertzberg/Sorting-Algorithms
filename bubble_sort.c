#include <stdlib.h>
#include <stdio.h>

void    int_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void    bubble_sort(int *arr, int N)
{
    int i, j;
    int swapped;

    i = 0;
    while (i < N - 1)
    {
        swapped = -1;
        j = 0;
        while (j < N - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                int_swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
            j++;
        }
        if (swapped == -1)
            break ;
        i++;
    }
}

int main(int argc, char *argv[])
{
    int N;
    int *arr;

    N = argc - 1;
    arr = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        arr[i] = atoi(argv[i + 1]); 
    printf("Unsorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    bubble_sort(arr, N);

    printf("\nSorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    free (arr);
    return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    int_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void    selection_sort(int *arr, int N)
{
    int i, j, min;

    i = 0;
    while (i < N - 1)
    {
        min = i;
        j = i + 1;
        while (j < N)
        {
            if (arr[j] < arr[min])
                min = j;
            j++;
        }
        if (i != min)
            int_swap(&arr[i], &arr[min]);
        i++;
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

    selection_sort(arr, N);

    printf("\nSorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    free (arr);
    return 0;
}
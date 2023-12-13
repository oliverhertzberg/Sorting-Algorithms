#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void    insertion_sort(int *arr, int N)
{
    int i, j, temp;

    i = 0;
    while (i < N)
    {
        j = i + 1;
        while (j < N)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
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

    insertion_sort(arr, N);

    printf("\nSorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    free (arr);
    return 0;
}
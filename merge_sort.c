#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// Merges two sub-arrays of arr[]
// First sub-array is arr[l..m]
// Second sub-array is arr[m+1..r]
void    merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
        k++;
    }
    // Copy the remaining elements of L[], if there are any
    while (i < n1)
        arr[k++] = L[i++];
    // Copy the remaining elements of R[], if there are any
    while (j < n2)
        arr[k++] = R[j++];
}

// l is for left index and r is right index of the sub-array of arr to be sorted
void    merge_sort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = (l + (r - l)) / 2;

        // sort first and second halves
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m ,r);
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

    merge_sort(arr, 0, N - 1);

    printf("\nSorted:\n");
    for (int i = 0; i < N; i++)
        printf("%i, ", arr[i]);

    free (arr);
    return 0;
}
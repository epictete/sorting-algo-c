#include <stdio.h>

int Partition(int A[], int start, int end)
{
    int pivot = A[end];
    int pIndex = start;

    for (int i = start; i < end; i++)
    {
        if (A[i] <= pivot)
        {
            int temp = A[i];
            A[i] = A[pIndex];
            A[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = A[pIndex];
    A[pIndex] = A[end];
    A[end] = temp;

    return pIndex;
}

void QuickSort(int A[], int start, int end)
{
    if (start < end)
    {
        int pIndex = Partition(A, start, end);

        QuickSort(A, start, pIndex-1);
        QuickSort(A, pIndex+1, end);
    }
}

int main (void)
{
    int A[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(A) / sizeof(A[0]);

    QuickSort(A, 0, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    printf("\n");

    return 0;
}
#include <stdio.h>

void InsertionSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int value = A[i];
        int empty = i;

        while (empty > 0 && A[empty-1] > value)
        {
            A[empty] = A[empty-1];
            empty -= 1;
        }

        A[empty] = value;
    }
}

int main(void)
{
    int A[] = {2, 7, 4, 1, 5, 3, 6};
    int n = sizeof(A) / sizeof(A[0]);

    InsertionSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    printf("\n");

    return 0;
}
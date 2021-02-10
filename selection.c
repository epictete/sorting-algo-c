#include <stdio.h>

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int iMin = i;

        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[iMin]) iMin = j;
        }

        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main(void)
{
    int A[] = {2, 7, 4, 1, 5, 3, 6};
    int n = sizeof(A) / sizeof(A[0]);

    SelectionSort(A, n);

    for (int i = 0; i < n; i++) printf("%d ", A[i]);

    printf("\n");

    return 0;
}
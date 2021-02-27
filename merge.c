#include <stdio.h>

void Merge(int L[], int R[], int A[], int nL, int nR)
{
    int i = 0, j = 0, k = 0;

    while (i < nL && j < nR)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < nL)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < nR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int A[], int n)
{
    if (n < 2) return;

    int mid = n / 2;
    int L[mid], R[n-mid];
    int nL = sizeof(L) / sizeof(L[0]);
    int nR = sizeof(R) / sizeof(R[0]);

    for (int i = 0; i < mid; i++)
        L[i] = A[i];

    for (int i = mid; i < n; i++)
        R[i-mid] = A[i];

    MergeSort(L, nL);
    MergeSort(R, nR);
    Merge(L, R, A, nL, nR);
}

int main(void)
{
    int A[] = {2, 4, 1, 6, 8, 5, 3, 7};
    int n = sizeof(A) / sizeof(A[0]);

    MergeSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    
    printf("\n");

    return 0;
}
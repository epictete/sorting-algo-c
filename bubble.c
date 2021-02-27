#include <stdio.h>

void BubbleSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n-i; j++)
        {
            if (A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }

        if (flag == 0) break;
    }
}

int main(void)
{
    int A[] = {2, 7, 4, 1, 5, 3, 6};
    int n = sizeof(A) / sizeof(A[0]);

    BubbleSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    printf("\n");

    return 0;
}
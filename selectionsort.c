//selection sort

#include<stdio.h>

int main()
{
    int A[] = {9, 5, 8, 3, 1, 7};
    int i, j, min, temp, n = 6;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }

        if (i != min)
        {
            temp = A[min];
            A[min] = A[i];
            A[i] = temp;
        }
    }

    printf("After selection sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}

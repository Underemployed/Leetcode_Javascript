#include <stdio.h>
#include <stdlib.h>

void swap(int *c, int *b)
{
    int temp = *c;
    *c = *b;
    *b = temp;
}

void bubbleSort(int *a, int n)
{
    int i, j;
    int k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
        // for (k = 0; k < n; k++)
        // {
        //     printf("%d ", a[k]);
        // }
        // printf("\ni=%d,j=%d", i, j);

        // printf("\n");
    }
}

int main()
{
    int a[100], i = 0, n = 0;

    printf("No. of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    bubbleSort(a, n);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

#include <stdio.h>

int max(int a[], int n);
int max(int a[], int n)
{

    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i + 1])
        {
            max = a[i + 1];
        }

        return max, i;
    }
}

int main()
{
    int a[] = {1, 5, 7, 5, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Array elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[0]);
    }

    printf("The maximum number is %d at index %d", max(a, n));

    return 0;
}
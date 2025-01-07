// Sortting an array using bubble sort in C program

#include <stdio.h>

// making function to execute bubble sort

void sort(int a[], int n);
void sort(int a[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, a[100];

    printf("Enter the length of an array : ");
    scanf("%d", &n);

    printf("Enter value at all index of array one by one : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    sort(a, n); // Function call to sort an array(it is user defind function)

    printf("\nElements are(After sortting) : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}

// Write a C program to reverse an array

#include <stdio.h>
void reverseArr(int a[], int n);
void reverseArr(int a[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
       int temp = a[i];
       a[i] = a[n-i-1];
       a[n-i-1] = temp;
    }
    
}

int main()
{
    int n, a[100];

    printf("Enter the length of array : ");
    scanf("%d", &n);

    printf("Enter the element in each index one by one\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before reverse array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    reverseArr(a, n);

    printf("After reverse array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
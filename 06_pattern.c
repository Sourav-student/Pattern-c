// Write a c program to print the pattern

// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <stdio.h>

int main()
{
    int n, x;

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        x = 1 + i;
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t", x + j);
        }

        printf("\n");
    }

    return 0;
}
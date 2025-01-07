// Factorial of a Number using Recursion

#include <stdio.h>

int facNum(int n);
int facNum(int n)
{

    if (n == 1)
    {
        return 1; //Base Condition
    }

    return n * facNum(n - 1); //Main Condition
}

int main()
{
    int n;

    // Getting number from user
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("Factorial of a number %d is %d", n, 1);
    }

    else
    {
        printf("Factorial of a number %d is %d", n, facNum(n));
    }
    return 0;
}
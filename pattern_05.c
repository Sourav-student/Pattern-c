// Write a c program to print this pattern

//1
//2 3
//4 5 6
//7 8 9 10

#include <stdio.h>

int main(){
    int n, x;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        x = i + 1;

        for (int j = 0; j <= i; j++)
        {
           printf("%d\t", x + j);
        }
        printf("\n");
    }
    
    return 0;
}
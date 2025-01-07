// Write A C program TO Print Fibonacci series

#include <stdio.h>

int main(){
    int n, a = 0, b = 1;

    //printing number of terms in fibonacci series by the user
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    //printing Fibonacci Series
    printf("Fibonacci Series : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}
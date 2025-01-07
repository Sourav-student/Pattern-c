// Factorial Of a number in c program without using recursion

#include <stdio.h>

//Function to calculate Factorial;
int facNum(int n);
int facNum( int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial*i;
    }

    return factorial;
    
}

int main(){
    int n;
    // Enter number by user 
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Factorial of %d is %d", n, 1);
    }

    else{
        printf("Factorial of %d is %d", n, facNum(n));
    }
    
    return 0;
}
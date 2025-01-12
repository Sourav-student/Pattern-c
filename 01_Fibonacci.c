// Write a C program to print Fibonacci series using
// recursion

#include <stdio.h>

int fibonacci(int);
int fibonacci(int n)
{
  if (n == 1 || n == 2)
  {
    return n - 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  int n;
  printf("Enter the term number of fibonacci series : ");
  scanf("%d", &n);

  printf("For %d is %d", n, fibonacci(n));
  return 0;
}
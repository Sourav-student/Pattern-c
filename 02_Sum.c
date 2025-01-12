// Write a C program to print the sum of numbers in between
// 100 to 300 that are divided by 5.

#include <stdio.h>

int main()
{
  int num, sum = 0;
  for (num = 101; num < 300; num++)
  {
    if (num % 5 == 0)
    {
      sum = sum + num;
    }
  }

  printf("Sum = %d", sum); // sum = 7800

  return 0;
}
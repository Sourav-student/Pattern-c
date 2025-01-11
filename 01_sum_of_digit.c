// Write a C program to sum all digit of a number
// ex- 168  sum = 1 + 6 + 8 = 15

#include <stdio.h>

int main()
{
  int num;
  int sum = 0;

  // Getting number from the user
  printf("Enter a number : ");
  scanf("%d", &num);

  while (num > 0)
  {
    sum = sum + (num % 10);
    num = num / 10;
  }

  printf("The sum of the digit of given number is : %d", sum);

  return 0;
}
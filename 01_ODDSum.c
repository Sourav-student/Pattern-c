// Write a C Program to sum the all odd numbers

#include <stdio.h>

int main()
{
  int n, a = 1, sum = 0;
  printf("Enter the number of terms : ");
  scanf("%d", &n);

  printf("Series is : ");
  for (int i = 0; i < n; i++)
  {
    sum = sum + a;
    printf("%d ", a);
    a = a + 2;
  }

  printf("\nSum = %d", sum);
  
  return 0;
}
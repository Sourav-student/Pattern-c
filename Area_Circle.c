// Write a C program to find the area of circle

#include <stdio.h>

int main()
{
  int r;

  // Getting the value of radius from user
  printf("Enter the radius of circle : ");
  scanf("%d", &r);

  // Now area
  printf("Area of circle is %.2f", r * r * 3.14);
  return 0;
}
// Print even number series in C Programming

#include <stdio.h>

int main(){
  int n, i = 0, a = 2;

  printf("Enter the length of the series : ");
  scanf("%d", &n);

  while (i<n)
  {
    printf("%d ", a);
    a = a + 2;
    i++;
  }
  
  return 0;
}
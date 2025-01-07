// Write a C program to addition of two matrix

#include <stdio.h>

int main(){
  
  int a[2][2], b[2][2], c[2][2], i, j;

  printf("Enter the elements of first matrix : \n");
  for(i=0; i<2; i++){
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of second matrix : \n");
  for(i=0; i<2; i++){
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  //The code for addition of two matrix

  for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 2; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
    
  }

  //Printing the result

  printf("The sum Matrix is : \n");

  for(i=0; i<2; i++){
    for (j = 0; j < 2; j++)
    {
      printf("%d ", c[i][j]);
    }

    printf("\n");
  }

  return 0;
}
// Write a program for Linear Search
// Linear Search - It is use for both sorted array or unsorted array

#include <stdio.h>

int linearSear(int a[], int element, int size);
int linearSear(int a[], int element, int size){

  for (int i = 0; i < size; i++)
  {
    if (a[i] == element)
    {
       return i;
    }
    
  }

  return -1;
  
}

int main(){
  int a[] = {1, 3, 2, 5, 7, 34, 32, 12};
  int element = 7; // it is the element that is required to find
  int size = sizeof(a)/sizeof(int);
  
  int searchIndex = linearSear(a, element, size);

  printf("Element %d is found at index %d\n", element, searchIndex);
  return 0;
}
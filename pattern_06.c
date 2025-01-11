// Write a C program to print the pattern
// E
// EN
// ENG
// ENGL
// ENGLI
// ENGLIS
// ENGLISH
#include <stdio.h>
#include <string.h>

int main()
{

  char ch[100];

  // Getting a word from user
  printf("Enter a word : ");
  scanf("%s", ch);

  for (int i = 0; i < strlen(ch); i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%c", ch[j]); // Printting Letters one by one
    }
    printf("\n"); // For next line
  }

  return 0;
}
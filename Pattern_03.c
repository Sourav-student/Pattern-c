// Write C Program to make this pattern

//     *
//    * *
//   * * *
//  * * * *

#include <stdio.h>

int main(){
    int n;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("\t");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("*\t\t");
        }
        printf("\n");
    }
    
    return 0;
}
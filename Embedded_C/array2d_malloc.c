/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter the number of rows.\n");
    scanf("%d", &x);
    printf("Enter the number of columns.\n");
    scanf("%d", &y);
    
    int *arr = (int *)malloc(sizeof(int) * x * y);
    
    printf("Enter the elements of 2D array.\n");
    for (int p = 0; p < x; p++)
    {
        for (int q = 0; q < y; q++)
        {
            scanf("%d", (arr + p * y + q));
            // Here the logic is 
            //1st element address of array + (p=0) * columns + (q=0) ==> [0][0]
            //2nd element address of array + (p=0) * columns + (q=1) ==> [0][1]
            //this goes on...
        }
    }
    
    printf("Printing the elements of 2D array.\n");
    for (int p = 0; p < x; p++)
    {
        for (int q = 0; q < y; q++)
        {
            printf("%d\t", *(arr + p * y + q));
        }
        printf("\n");
    }

    return 0;
}

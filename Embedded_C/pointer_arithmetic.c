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
    int n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(sizeof(int) * n);
    
    printf("Enter the elements of array.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Printing the elements of the array.\n");
    for(int x = 0; x < n; x++)
    {
        printf("%-3d", *(arr+x));
    }
    printf("\n");
    
    free(arr);
    return 0;
}

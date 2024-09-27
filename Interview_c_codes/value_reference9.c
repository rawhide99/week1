/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void value_display(int x , int y);
void reference_display(int *x, int *y);

int main()
{
    int a = 7, b = 77;

    value_display (a,b);
    printf("The values of a and b is %d and %d.\n", a , b);
    printf("The values are not swapped when passed by value.\n");
    
    reference_display(&a, &b);
    printf("\nThe values of a and b is %d and %d.\n", a , b);
    printf("The values are swapped when passed by reference.\n");

    return 0;
}

void value_display(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void reference_display(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/// Swapping two variables without using temp variable.

#include <stdio.h>

void swap(int *x, int *y);

int main()
{   
    int num1 = 0, num2 = 0;
    printf("Enter the number you want to Swap.\n");
    scanf("%d %d", &num1, &num2);
    
    printf("Number before swap is %d and %d.\n", num1, num2);
    swap(&num1, &num2);
    printf("Number after swap is %d and %d.\n", num1, num2);
    
    return 0;
}

void swap (int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

// one of the most important codes of all time.


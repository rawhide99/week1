/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct student
{
    int a;
    char b;
    char c;
}student;

typedef union employee
{
    int x;
    char y; 
    char z;
}emp;

int main()
{
    student st;
    emp e1;
    printf("The size of student structure is %d.\n", sizeof(st)); // size of structure is 8 bytes.
    printf("The size of employee union is %d.\n", sizeof(e1)); // size of union is 4 bytes
    return 0;
}

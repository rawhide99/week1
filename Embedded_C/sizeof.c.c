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
    float d;
    short e;
    char f;
    long g;
}student;

typedef union employee
{
    int x;
    char y; 
    char z;
    double w;
}emp;

int main()
{
    student st;
    emp e1;
    printf("The size of g is %d.\n", sizeof(st.g)); //size of long is 8bytes.
    printf("The size of student structure is %d.\n", sizeof(st)); // size of structure is 8 bytes.
    printf("The size of employee union is %d.\n", sizeof(e1)); // size of union is 4 bytes
    return 0;
}

// explanation of size of structure (S = Slack bytes)
/*
    int a               a a a a ==> 4 ==> Consumes 4 
    char b and char c   b c S S ==> 4 ==> Consumes(1+1 = 2) and 2 Slack bytes
    float d             d d d d ==> 4 ==> Consumes 4
    short e and charf   e e f S ==> 4 ==> Consumes(2+1 = 3) and 1 Slack byte
    long g              g g g g g g g g ==> 8 ==> Consumes 8 bytes
    
    Total size = 4 + 2 + 2 + 4 + 3 + 1 + 8 = 24bytes
*/
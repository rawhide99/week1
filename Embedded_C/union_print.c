/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union Data 
{
    int a;
    float b;
    char c;
};

int main() 
{
    union Data data;
    data.a = 10;
    printf("a: %d\n", data.a);
    printf("b: %.2f\n", data.b);
    printf("c: %c\n", data.c);

    data.b = 15.5;
    printf("a: %d\n", data.a);
    printf("b: %.2f\n", data.b);
    printf("c: %c\n", data.c);
    
    data.c = 'A';
    printf("a: %d\n", data.a);
    printf("b: %.2f\n", data.b);
    printf("c: %c\n", data.c);

    return 0;
}


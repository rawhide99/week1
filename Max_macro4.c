/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX(a,b,c)  (a > b) ? (a > c ? a : c) : (b > c ? b : c) 

int main()
{
    int x, y, z;
    printf("Enter any three integers to find max.\n");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("%d is the max number out of given three numbers.\n", MAX(x,y,z));
    return 0;
}

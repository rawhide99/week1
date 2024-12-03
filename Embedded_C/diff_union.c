/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union Data 
{
    float x;
    float y;
    char z;
};

int main() 
{
    union Data d1;

    d1.x = 42;
    printf("Assigned int (a): %f\n", d1.x);

    d1.z = '@';
    printf("Assigned char (c): %c\n", d1.z);
    
    d1.y = 3.14;
    printf("Assigned float (b): %.2f\n", d1.y);

    printf("\nFinal values in the union:\n");
    printf("x (a): %d\n", d1.x);
    printf("y (b): %.2f\n", d1.y);  // Data member with highest space so this much memory is allocated.
    printf("z (c): %c\n", d1.z);

    return 0;
}
// The size of the union is same as the value of data member with highest byte value.
// Ex: In our case, it is float.
// Only a single data member can hold its value at a time.
// Its main advantage is that it consumes much less memory compared to structure.

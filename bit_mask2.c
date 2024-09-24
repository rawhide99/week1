/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Clearing 2nd bit and setting 3rd bit using bit mask

#include <stdio.h>
#include <stdint.h>

#define BV(n) (1<<n)
int main()
{
    uint16_t a = 0x1234;
    
    // Clearing 2nd bit;
    a &= ~BV(2);
    printf("The value of a after clearing 2nd bit is %x\n", a);
    
    //Setting 3rd bit;
    a |= BV(3);
     printf("The value of a after setting 3rd bit is %x\n", a);

    return 0;
}

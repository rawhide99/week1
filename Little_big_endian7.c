/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// little endian or big endian
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t a = 0x4231;    //0100 0010 0011 0001
    if(a & 1)
        printf("Your architecture is little endian.\n");
    else
        printf("Your architecture is big endian.\n");
    return 0;
}

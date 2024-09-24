/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// little endian or big endian
#include <stdio.h>
#include <stdint.h>

int main()
{
    unsigned int a = 0x10234567;    //0100 0010 0011 0001
    char *p = (char*)&a;
    
    if(*p == 0x67)
        printf("Your architecture is little endian.\n");
    else
        printf("Your architecture is big endian.\n");
    return 0;
}
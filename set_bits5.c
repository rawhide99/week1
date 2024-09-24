/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Count the number of ones from the integer
#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a integer where you want to count number of ones(set bits).\n");
    scanf("%d", &num);
    
    while(num)
    {
        /* Logic 1
        count = count + (num & 1);
        num = num >> 1;
        */
        
        if(num & 1 == 1)
        {
            count ++;
        }
        
        num = num >> 1;
    }
    
    printf("The number of 1's in the given number is %d.\n", count);
    return 0;
}

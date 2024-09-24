/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Declare a constant that returns the number of seconds in a year, discard leap year in your answer.

#include <stdio.h>
#define SECONDS (60 * 60 * 24 * 365)

int leap_year(int n);

int main()
{
    int year, res;
    printf("Enter the year you want to calculate the seconds.\n");
    scanf("%d", &year);
    
    res = leap_year(year);
    if (res == 0)
    {
        long long total_seconds = SECONDS;
        printf("The number of seconds in %d year is %lld.\n", year, total_seconds);
    }
    else
    {
        printf("It is a leap year so it is discarded.\n");
    }
    return 0;
}

int leap_year(int n) 
{
    int a;
    a = (n % 400 == 0) ? 1 : (n % 4 == 0) ? (n % 100 != 0) : 0 ? 1 : 0;
    return a;
}
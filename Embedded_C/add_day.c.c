/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Date
{
    int day;
    int month;
    int year;
}date;

void add_days(int num, date *d);

int is_leap_year(int year); 

int main()
{
    date d1;
    d1.day = 27;
    d1.month = 9;
    d1.year = 2024;
    printf("The given date is %d-%d-%d.\n", d1.day, d1.month, d1.year);
    
    int n;
    printf("Enter the number of the days that you want to add.\n");
    scanf("%d", &n);
    
    add_days(n, &d1);
    
    return 0;
}

int is_leap_year(int year) 
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int days_in_month(int month, int year) 
{
    switch (month) 
    {
        case 1: return 31;
        case 3: return 31;
        case 5: return 31;
        case 7: return 31;
        case 8: return 31;
        case 10: return 31;
        case 12: return 31;
        case 4: return 30; 
        case 6: return 30;
        case 9: return 30;
        case 11: return 30;
        case 2: return is_leap_year(year) ? 29 : 28;
        default: return 0;
    }
}

void add_days(int num, date *d)
{
    d->day = d->day + num;
    while (d->day > days_in_month(d->month, d->year)) 
    {
        d->day = d->day - days_in_month(d->month, d->year);
        d->month++;
        if (d->month > 12) 
        {
            d->month = 1;
            d->year++;
        }
    }
    printf("The date after adding days is %d-%d-%d.\n", d->day, d->month, d->year);
}



/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
typedef struct employee
{
    char name[30];
    int id;
    float salary;
}emp;


int main()
{
    int n;
    printf("Enter the number of employees.\n");
    scanf("%d", &n);
    
    emp arr[n];
    printf("Enter the details of all the employees.\n");
    for(int i=0; i < n; i++)
    {
        scanf("%s %d %f", arr[i].name, &arr[i].id, &arr[i].salary);
    }
    
    printf("\nDetails of Employees:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Name: %s, ID: %d, Salary: %.2f\n", arr[i].name, arr[i].id, arr[i].salary);
    }

    return 0;
}

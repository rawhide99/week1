/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Employee 
{
    char name[30];
    int id;
    float salary;
};

int main() 
{
    struct Employee e1;

    snprintf(e1.name, sizeof(e1.name), "Rawhide");
    e1.id = 007;
    e1.salary = 90000;

    printf("Employee Name: %s\n", e1.name);
    printf("Employee ID: %d\n", e1.id);
    printf("Employee Salary: %.2f\n", e1.salary);

    return 0;
}

// The total memory utilized by a structure is the addition of all the member function it it.
// And for uniform memory access, some times compiler does structure padding.
// It can hold the values for all the data members as each member has seprately allocated memory.
// We can also access the values independently.



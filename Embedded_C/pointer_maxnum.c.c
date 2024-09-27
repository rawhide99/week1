/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Return a pointer to the Largest element in an array.
#include <stdio.h>

int * max(int size, int arr[]);

int main()
{
    int n;
    int *ptr;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of an array.\n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Printing the elements before sorting.\n");
    
    for(int i = 0; i < n; i++)
    {
        printf("%-3d", arr[i]);
    }
    
    ptr = max(n,arr);
    printf("\nThe pointer pointing to Largest number is %p.\n", (void*)ptr);
    printf("Dereferening the same pointer we get the largest number which is %d.\n", *ptr);
    return 0;
}


int* max(int size, int arr[])
{
    int temp;
    for(int x = 0; x < size-1; x++)
    {
        for(int y = x + 1; y < size; y++)
        {
            if(arr[x] > arr[y])
            {
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
    
    printf("\nPrinting the elements after sorting.\n");
    
    for(int i = 0; i < size; i++)
    {
        printf("%-3d", arr[i]);
    }
    
    return &arr[size - 1];
}

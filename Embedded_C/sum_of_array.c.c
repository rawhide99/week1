/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// sum of array using a function

#include<stdio.h>
#include<stdlib.h>

int sum_array(int size, int arr[]);

int main()
{
	int n, sum;
	printf("Enter the size of an array.\n");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter the elements: \n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Printing the elements.\n");
	
	for(int i = 0; i < n ; i ++)
	{
		printf("%d\t", arr[i]);
	}
	
	printf("\n");
	
	sum = sum_array(n,arr);
	printf("The sum of all the elements of array is %d.\n", sum);
	return 0;
}

int sum_array(int size, int arr[])
{
	int sum = 0;
	for (int x = 0; x < size; x++)
	{
		sum = sum + arr[x];
	}
	return sum;
}
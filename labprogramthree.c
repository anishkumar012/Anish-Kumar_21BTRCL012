//A simple C program to increment a pointer 
/*#include<stdio.h>
int main( )
{
    int a[3] = {22, 33, 44};
    int b, *ap, i;
    ap = a;
    for(i = 0; i < 3; i++)
    {
        printf("The address of pointer is: %d\n", ap);
        printf("The value of pointer is: %d\n", *ap);
        ap++;
    }
    return 0;
}*/

//A simple C program to decrement a pointer
/*#include<stdio.h>
int main()
{
    int a[3] = {22, 33, 44};
    int b, *ap, i;
    ap = &a[2];
    for(i = 3; i>0; i--)
    {
        printf("The address of pointer is: %d\n", ap);
        printf("The value of pointer is: %d\n", *ap);
        ap--;
    }
    return 0;
}*/

//A simple C program to perform arithmetic pointer

/*#include<stdio.h>
int main()
{
    //Integer variables
    int a=20, b=10;

    //Variables for storing arithmetic operations solution
    int add, sub, div, mul, mod;

    //Pointer variables for variables a and b
    int *ptr_a, *ptr_b;

    //Initialization of pointers
    ptr_a = &a;
    ptr_b = &b;

    //Performing arithmetic operations on pointers
    add = *ptr_a + *ptr_b;
    sub = *ptr_a - *ptr_b;
    mul = *ptr_a * *ptr_b;
    div = *ptr_a / *ptr_b;
    mod = *ptr_a % *ptr_b;

    //Printing values
    printf("Addition=%d\n", add);
    printf("Subtraction=%d\n", sub);
    printf("Multiplication=%d\n", mul);
    printf("Division=%d\n", div);
    printf("Modulo=%d\n", mod);
    return 0;
}*/

/* b. To swap two numbers using functions. */

/*A simple program to demonstrate pass by value */
/*#include<stdio.h>
int main()
{
    int swap(int, int);
    int a = 5, b = 9;
    swap(a, b);
    printf("\nBefore swapping, the value of a and b is: %d %d", a, b);
}
int swap(int a, int b)
{
    int t = 0;
    t = a;
    a = b;
    b = t;
    printf("\nAfter swapping, the value of a and b is: %d %d", a, b);
}*/

/*A simple program to demonstrate pass by refrence */
/*#include<stdio.h>
#include<conio.h>
int main( )
{
    int swap(int*, int*);
    int a = 5, b = 9;
    printf("Before swapping, the value of a and b is: %d %d\n", a, b);
    swap(&a,&b);
    printf("After swapping, the value of a and b is: %d %d", a, b);
    return 0;
}
int swap(int *a, int *b)
{
    int t = 0;
    t = *a;
    *a =*b;
    *b = t;
    return(*a,*b);
}*/

/* c. Different memory allocation functions.*/
//malloc() and free()
// Program to calculate the sum of n numbers entered by the user
/*#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // if memory cannot be allocated
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    // deallocating the memory
    free(ptr);
    return 0;
}*/

//calloc() and free()
//Program to calculate the sum of n numbers entered by the user 
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}*/

// realloc()
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *ptr, i , n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);
    ptr = (int*) malloc(n1 * sizeof(int));
    printf("Addresses of previously allocated memory:\n");
    for(i = 0; i < n1; i++)
    printf("%pc\n",ptr + i);
    printf("\nEnter the new size: ");
    scanf("%d", &n2);
    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int));
    printf("Addresses of newly allocated memory:\n");
    for(i = 0; i < n2; ++i)
    printf("%pc\n", ptr + i);
    free(ptr);
    return 0;
}
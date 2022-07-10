/* Design, Develop and Implement a Program for the following using Recursive
functions.*/
//a. To find the factorial of a number. 

/*#include<stdio.h>
int find_factorial(int);
int main()
{
    int num, fact;
    printf("\nEnter any integer number:");
    scanf("%d",&num);
    fact =find_factorial(num);
    printf("\nfactorial of %d is: %d",num, fact);
    return 0;
}
int find_factorial(int n)
{
    if(n==0)
    return(1);
    return(n*find_factorial(n-1));
}*/

//b. To find the GCD of two numbers.
/*#include<stdio.h>
int gcd(int a, int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    return gcd(a,a-b);
}
int main()
{
    int a=0; int b=0;
    printf("\nEnter the first element:");
    scanf("%d", &a);
    printf("\nEnter the second element:");
    scanf("%d", &b);
    printf("\n The GCD is: %d", gcd(a,b));
    return 0;
}*/

//c.To find XN where X is real number and N is an integer number.

/*#include<stdio.h>
#include<math.h>
int main()
{
    int numberbase, numberexponent, numbervalue;
    printf("Enter the real base:");
    scanf("%d", &numberbase);
    printf("\nEnter the integer exponent:");
    scanf("%d", &numberexponent);
    numbervalue = pow(numberbase, numberexponent);
    printf("\n The power of the given numberbase and number exponent is: %d ", numbervalue);
    return 0;
}
*/
// d. To Solve Towers of Hanoi problem */
#include<stdio.h>
void towerofHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n==1)
    {
        printf("\n Move disc 1 from %c to %c.", from_rod, to_rod);
        return;
    }
    towerofHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move the disc %d from %c to %c", n, from_rod, to_rod);
    towerofHanoi(n-1, aux_rod, from_rod, to_rod);
}
int main()
{
    int n=5;
    towerofHanoi(n, 'A', 'B', 'C');
    return 0;
}
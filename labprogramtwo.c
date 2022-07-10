#include <stdio.h>
#include <math.h>
int main() 
{
    int a[10][10], transpose[10][10], r, c, sum=0, norm=0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    // asssigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        printf("Enter element a%d%d: ", i + 1, j + 1);
        scanf("%d", &a[i][j]);
    }
    // printing the matrix a[][]
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        printf("%d  ", a[i][j]);
        if (j == c - 1)
        printf("\n");
    }
    // computing the transpose
    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        transpose[j][i] = a[i][j];
        }
    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j) {
        printf("%d  ", transpose[i][j]);
        if (j == r - 1)
        printf("\n");
    }
    printf("\nNormal of the matrix:\n");
    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        sum= sum + a[i][j];
    }
    norm= sqrt(sum);
    printf("\n The Normal of the matrix is : %d\n", norm);

    return 0;
 }
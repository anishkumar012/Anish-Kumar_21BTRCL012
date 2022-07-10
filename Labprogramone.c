#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[5],pos,elem;
int n=0;
void create();
void display();
void insert();
void delete();
void main()
{
    int choice;
    while(1)
    {
        printf("\n--------choose option-------");
        printf("\n1. Create an array of N integer elements");
        printf("\n2. Display the elements");
        printf("\n3. Inserting an element");
        printf("\n4. Deleting an element");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1 : create();
            break;
            case 2: display();
            break;
            case 3: insert();
            break;
            case 4: delete();
            break;
            default: printf("\nEnter a valid choice:");
            
        }

    }
}
void create()
{
    int i;
    printf("\nEnter the no of elements:");
    scanf("%d", &n);
    printf("\nEnter the elements:");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void display()
{
    int i;
    if(n == 0)
    {
        printf("\nNo elements to display");
        return;
    }
    printf("\nArray elements are: ");
    for(i=0; i<n;i++)
    printf("%d\t ", a[i]);
}
void insert()
{
    int i;
    if(n==5)
    {
        printf("\nArray is full: No insertion possible");
        return;
    }
    do
    {
        printf("\nEnter a valid postion where insertion need to be done:");
        scanf("%d", &pos);
    }
    while(pos>n);
    {
        printf("\nEnter the value to be inserted:");
        scanf("%d", &elem);
        for(i=n-1; i>=pos; i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=elem;
        n=n+1;
    }
}
void delete()
{
    int i;
    if(n==0)
    {
        printf("\nArray is empty");
        return;
    }
    do
    {
        printf("\nEnter a valid postion from where element need to be deleted:");
        scanf("%d", &pos);
    }
    while(pos>=n);
    {
        elem=a[pos];
        printf("The deleted element is %d", elem);
        for(i=pos; i<=n-1; i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        display();
    }
}
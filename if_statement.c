#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    if(n<10)
    {
        printf("%d is less than 10");
        printf("\nSquare is : %d",n*n);
    }
}
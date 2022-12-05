#include<stdio.h>
int sum(int, int);
void main()
{
    int a,b, add;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    add=sum(a,b);
    printf("Additon of two numbers :%d",add);
}
int sum(int a, int b)
{
    return a+b;
}
//Function with argument with return value
#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area;
    const float p=3.14;
    printf("Enter the radius : ");
    scanf("%f",&r);
    area = p*r*r;
    printf("Area of circle is :%.2f",area);
    
}
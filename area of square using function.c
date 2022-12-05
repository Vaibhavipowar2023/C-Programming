#include<stdio.h>
#include<conio.h>
int  square();
int main()
{
   
   printf("Area of square is :%d",square());
   return 0;
}
int  square()
{
 int side;
 float area;
 printf("Enter the side:");
 scanf("%d",&side);
 area=side*side;
}
 
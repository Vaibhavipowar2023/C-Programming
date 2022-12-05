#include<stdio.h>
#include<conio.h>
void  add();
int main()
{
   
   add();
   return 0;
}
void  add()
{
   int a,b ,sum;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);
   sum=a+b;
  printf("Addition of two number is :%d",sum);
}
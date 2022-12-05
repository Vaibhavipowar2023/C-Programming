#include<stdio.h>
#include<conio.h>
void  avg(int,int,int);
int main()
{
   int a,b,c;
   printf("Enter the 3 numbers:");
   scanf("%d%d%d",&a,&b,&c);
   avg(a,b,c);
   return 0;
}
   
void avg(int a, int b, int c)
{
 float average=(a+b+c)/3;
 printf("Average of three numbers is :%.1f",average);

}
//Function with argument and without return value
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n;
     printf("Enter the number whose you want to table:");
     scanf("%d",&n);
   
     table : 
     printf("%d x %d = %d\n",n,i,n*i);  
     i++;  
     if(i<=10)  
     goto table;   
  
}N
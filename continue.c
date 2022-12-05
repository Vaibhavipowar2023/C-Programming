#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
     printf("Enter number :");
     scanf("%d",&n);
 
    for(i=0;i<=n;i++)
    {
        
        if(i==5)
       //if value of i is equal to 5, it will escape the value of 5 and continue with 6
        continue;
        
     printf("\n%d",i);
    }

}
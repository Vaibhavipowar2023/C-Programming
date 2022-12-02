#include<stdio.h>
void main ()
{
   int time;
   printf("Enter time :");
   scanf("%d",&time);
if (time < 10) 
{
  printf("Good morning.");
} 
else if (time < 20) {
  printf("Good afternoon.");
} 
else {
  printf("Good evening.");
}
}
// Outputs "Good evening."
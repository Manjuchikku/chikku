#include<stdio.h>
int main()
{
int a;
printf("Enter the number");
scanf("%d",&a);
if(a%2==0)
{
printf("Enter the number is even");
}
else if(a%3!=0)
{
printf ("Enter the odd");
}
else 
{
printf("Enter the valid number");
}
return 0;

#include<stdio.h>
int main()
{
int i,a,factor;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<a;i++)
{
if(a%i==0) 
{
factor=i;
}
}
if(factor>1) 
{
printf ("The number is a composite number!");
}
else 
{
printf ("This is not a composite number!");
}
return 0;
}

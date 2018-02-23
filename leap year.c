#include<stdio.h>
int main()
{
int a;
printf("Enter the a:");
scanf("%d",&a);
if(a%4==0)
{
if(a%100==0)
{
if(a%400==0)
{
printf("%d leap year",a);
}
else
{
printf("%d not a leap year",a);
}
}
else
{
printf("%d leap year",a);
}
}
else
{
printf("%d not a leap year",a);
}
return 0;
}

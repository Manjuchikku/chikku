#include<stdio.h>
int main()
{
int number,orginal number,remainder,result=0;
printf("Enter the three digit number:");
scanf("%d",&number);
orginal number=number;
while(orginal number!=0)
{
remainder=orginal number%10;
result+=remaider*remaider*remaider;
orginal number/=10;
}
if(result==number)
printf("%d is the armstong no",number);
else
printf("%d is not arm strong no"number);
return 0;
}

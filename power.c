#include<stdio.h>
int main()
{
int base,exponent;
 long result=1;
printf("Enter the base");
scanf("%d",&base);
printf("Enter the exponent");
scanf("%d",&exponent);
while(exponent !=0)
{
result*=base;
--exponent;
}
printf("Answer=%11d",result);
return 0;
}

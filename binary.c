#include <stdio.h>
int main() 
{
int num,j=0,k;
printf("Enter the binary no:1344");
while(num>0)
{
j=num%10;
if((j!=0)||(j!=1))
{
printf("The given num is not binary");
break;
}
num=num/10;
if(num==0)
{
printf("The given num is binary");
}
}
return 0;
}

#include<stdio.h>
int main()
{
int n,i;
long long factorial=1;
printf("Enter the factorial:");
scanf("%d",&n)
if(n<0)
{
printf("Error!factorial negative no is does not exist");
else
{
for(i=1;i<=n;++i)
{
factorial=*i;
}
printf("Factorial of %d=%11u",n,factorial);
}
return 0;
}
}

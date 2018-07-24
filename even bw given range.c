#include<stdio.h>
int main()
{
int num,n=11,m=20;
printf("Display the even no between given range:\n");
scanf("%d",&num);
for(num=m;num<=n;++num)
{
if(num %2==0)
printf("%d",num);
}
return 0;
}

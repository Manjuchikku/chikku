#include<stdio.h>
int main()
{
int i,num,rem,n1,n2;
printf("Enter two no(intervals):");
scanf("%d","%d",&n1,&n2);
printf("Armstrong no between %d and %d are",n1,n2);
for(i=n1+n;i<n2;++i)
{
temp=i;
num=0;
while(num!=0)
{
rem=temp%10;
num=rem*rem*rem;
temp/=10;
}
if(i==num)
{
printf("%d",i);
return 0;
}

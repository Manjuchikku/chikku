#include<stdio.h>
int main()
{
int n,reversednumber=0,remainder,orginalinteger;
printf("Enter the integer");
scanf("%d,&n);
orginalinteger=n;
while(n!=0)
{
remainder=n%10;
reversedinteger=reversedinteger*10+remainder;
n/=10;
}
if(orginalinteger==reversedinteger)
{
printf("%d is the palindrome",orginalinteger);
else
printf("%d is not palindrome",orginalinteger);
return 0;
}
}

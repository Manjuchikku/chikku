#include <stdio.h>
main()
{
int a, reverse = 0, temp;
printf("Enter a number to check if it is a palindrome or not\n");
scanf("%d",&a);
temp = a;
while (temp != 0)
{
reverse = reverse * 10;
reverse = reverse + temp%10;
temp    = temp/10;
}
if (a == reverse)
printf("%d is a palindrome number\n", a);
else
printf("%d isn't a palindrome number\n", a);
return 0;
}

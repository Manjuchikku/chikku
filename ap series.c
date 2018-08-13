#include <stdio.h>
#include <stdlib.h>
int main() {
int first, diff, cond, value, sum=0, i;
printf("Enter the number of cond in AP series\n");
scanf("%d", &cond);
printf("Enter first cond and common difference of AP series\n");
scanf("%d %d", &first, &diff);
value = first;
printf("AP SERIES\n");
for(i = 0; i < cond; i++) 
{
printf("%d ", value);
sum += value;
value = value + diff;
}
 printf("\nSum of the AP series till %d cond is %d\n", cond, sum);
 getch();
 return 0;
}

#include <stdio.h>
void sort_no_ascending(int no[], int count)
{
int temp, i, j, k;
for (j = 0; j < count; ++j)
{
for (k = j + 1; k < count; ++k)
{
if (no[j] > no[k])
{
temp = no[j];
no[j] = no[k];
no[k] = temp;
}
}
}
printf("Nos in ascending order:\n");
for (i = 0; i < count; ++i)
printf("%d\n", no[i]);
}
void main()
{
int i, count, no[20];
printf("How many no you are gonna enter:");
scanf("%d", &count);
printf("\nEnter the alignof one by one:");
for (i = 0; i < count; ++i)
scanf("%d", &no[i]);
sort_numbers_ascending(no, count);
}

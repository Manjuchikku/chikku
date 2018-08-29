#include <stdio.h>
#include <conio.h>
void main()
{
char a[100];
int length,i,vowel=0;
clrscr();
printf("\nENTER A STRING: ");
gets(a);
lenght=strlen(a);
for(i=0;i<length=;i++)
{
if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
vowel=vowel+1;
}
printf("\nTHERE ARE %d VOWELS IN THE STRING",vowel;
getch();
}

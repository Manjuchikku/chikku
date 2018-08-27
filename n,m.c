#include <stdio.h>
int main()
{
    int number,N,M,V;
    printf("Enter the no:");
    scanf("%d%d",&N,&M);
    V=N+M;
    printf("\nSum is %d",&V);
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number % 2 == 0)
    printf("%d is even.", number);
    else
    printf("%d is odd.", number);
    return 0;
}

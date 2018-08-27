#include <stdio.h> 
main()
{
  int N, i, c = 0;
  printf("Enter any number N:");
  scanf("%d", &N);
  for (i = 1; i <= N; i++)
  {
  if (N % i == 0) 
  c++;
  }

  if (c == 2) 
  {
  printf("N is a Prime number");
  }
  else {
  printf("N is not a Prime number");
  }
  return 0;    
}

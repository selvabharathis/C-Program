#include<stdio.h>
int main()
{
  int n,rem;
  scanf("%d",&n);
  while(n)
  {
    rem = n % 10;
    printf("\n%d",rem);
    n = n / 10;
  }
}

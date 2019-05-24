/*
Perfect number is a positive number which is equal to the sum of all its divisors excluding itself.
*/
#include<stdio.h>
int main()
{
  int n,sum=0;
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
      sum=sum+i;
  }
  if(sum==n)
    printf("yes perfect number");
  else
    printf("not a perfect number");
}

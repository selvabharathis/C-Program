/*
A number in which the sum of factorial of individual digits is equal to the number is called strong number.
*/
#include<stdio.h>
int fact(int a)
{
  int f=1;
  for(int i=1;i<=a;i++)
      f *= i;
  return f;
}
int main()
{
  int n,temp,sum=0,rem;
  scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
    rem = temp % 10;
    sum +=  fact(rem);
    temp = temp/10;
  }
  if(sum==n)
    printf("Yes its a strong number");
  else
    printf("Not a strong number");
}

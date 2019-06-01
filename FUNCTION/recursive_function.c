// sum of n natural number
// function called again and again with in a function is called recursion.
#include<stdio.h>

int sum(int n);

int main()
{
  int num,add;
  printf("enter the number upto which sum should be found = ");
  scanf("%d",&num);
  add = sum(num);
  printf("Sum = %d",add);
  return 0;
}

int sum(int n)
{
  if(n == 0)
    return n;
  else
    return (n + sum(n-1));
}

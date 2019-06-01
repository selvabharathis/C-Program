#include<stdio.h>
int abc()
{
  int a;
  scanf("%d",&a);
  return a;
}
int main()
{
  int val;
  val = abc();
  printf("%d",val);
}

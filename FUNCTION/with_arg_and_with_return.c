#include<stdio.h>
int abc(int a)
{
  int c = 10;
  return (a+c);// we can return only one value.
}
int main()
{
  int val;
  scanf("%d",&val);
  //int z = abc(val);
  //printf("%d",z);
  printf("%d",abc(val));
}

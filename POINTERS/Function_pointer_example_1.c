#include<stdio.h>

void add(int,int);

int main()
{
  int a,b;
  void (*p)(int,int);
  printf("enter a and b = ");
  scanf("%d%d",&a,&b);
  p = &add;
  (*p)(a,b);
  return 0;
}

void add(int a, int b)
{
  printf("sum = %d",a+b);
}

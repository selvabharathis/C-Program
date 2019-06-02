#include<stdio.h>

int area(int,int);

int main()
{
  int l,b,ar;
  int (*p)(int,int);
  printf("enter l, b = ");
  scanf("%d%d",&l,&b);
  p = &area;
  ar = (*p)(l,b);
  printf("Area = %d",ar);
  return 0;
}

int area(int l,int b)
{
  return l*b;
}

#include<stdio.h>

int read();
int square(int);
int cube(int);

int main()
{
  int result;
  result = cube(square(read()));
  printf("%d",result);
  return 0;
}

int read()
{
  int a;
  printf("enter a = ");
  scanf("%d",&a);
  return a;
}

int square(int x)
{
  return x*x;
}

int cube(int y)
{
  return y*y*y;
}

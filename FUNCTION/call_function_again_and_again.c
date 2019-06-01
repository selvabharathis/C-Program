#include<stdio.h>

int read();

int main()
{
  int result;
  result = 1 + read() + (read() * read()) - 10;
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

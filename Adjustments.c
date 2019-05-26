#include<stdio.h>
int main()
{
  int a = 123;
  float b = 123.456;
  double c = 123.45;
  char d = 'a';
  char e[] = "abcdef";
  printf("%d",a);
  printf("\n%10d",a);
  printf("\n%.10d",a);
  printf("\n%010d",a);
  printf("\n%f",b);
  printf("\n%.2f",b);
  printf("\n%2f",b);
  printf("\n%5.5f",b);
  printf("\n%lf",c);
  printf("\n%5lf",c);
  printf("\n%.3lf",c);
  printf("\n%c",d);
  printf("\n%10c",d);
  printf("\n%-10c",d);
  printf("\n%10.5c",d);
  printf("\n%-10.5c",d);
  printf("\n%s",e);
  printf("\n%10s",e);
  printf("\n%-10s",e);
  printf("\n%10.5s",e);
  printf("\n%-10.5s",e);
}

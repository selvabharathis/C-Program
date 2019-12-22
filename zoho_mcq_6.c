#include<stdio.h>
void f(int *a,int m)
{
  int j=0;
  for(j=0;j<m;j++)
  {
    *(a+j) = *(a+j)-5;
  }
}
int main()
{
  char a[] = {'f','g','h','i','j'};
  int j=0;
  f(a,5);
  for(j=0;j<=4;j++)
    printf("%c\t",a[j]);
  return 0;
}

#include<stdio.h>
int main()
{
  int n=12,res=1;
  while(n>3)
  {
    n-=3;
    res+=3;
  }
  printf("%d",n*res);
}

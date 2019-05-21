#include<stdio.h>
int main()
{
  int a,b,t,gcd;
  scanf("%d%d",&a,&b);
  while(b!=0)
  {
    t=b;
    b=a%b;
    a=t;
  }
  gcd=a;
  printf("GCD = %d",gcd);
}

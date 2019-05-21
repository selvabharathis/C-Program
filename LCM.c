#include<stdio.h>
int main()
{
  int a,b,t,gcd,x,y,lcm;
  scanf("%d%d",&a,&b);
  x=a;
  y=b;
  while(b!=0)
  {
    t=b;
    b=a%b;
    a=t;
  }
  gcd=a;
  lcm=(x*y)/gcd;
  printf("LCM = %d",lcm);
}

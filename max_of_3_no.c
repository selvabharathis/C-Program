#include<stdio.h>
int main()
{
  int a,b,c,ans;
  scanf("%d%d%d",&a,&b,&c);
  ans=(a > b) ? (a > c ? a : c) : (b > c ? b : c);
  printf("\n%d",ans);
  return 0;
}

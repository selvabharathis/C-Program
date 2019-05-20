#include<stdio.h>
int main()
{
  int a,b,c,d,ans;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  ans=(a>b)?   ((a>c)? ((a>d)?a:d) : ((c>d)?c:d))   :   ((b>c)? ((b>d)?b:d) : ((c>d)?c:d));
  printf("\n%d",ans);
  return 0;
}

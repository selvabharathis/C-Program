#include<stdio.h>
int main()
{
  int a[]={6,9,9,9,9};
  int r[6]={0,0,0,0,0,0};
  int i=0,m=1,s=5;
  for(i=s-1;i>=0;i--)
  {
    r[i+1]=(a[i]+m)%10;
    m=(a[i]+m)/10;
  }
  r[0]=m;
  for(i=1;i<=s;i++)
    printf("%d ",r[i]);
  return 0;
}

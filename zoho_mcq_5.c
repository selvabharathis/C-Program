#include<stdio.h>
int max(int x,int y)
{
  return (y>x)?y:x;
}
int main()
{
  int a[] = {-6,-3,8,-1,-2,1,5,-3};
  int z=a[0],n=8,i=0,c=a[0];
  for(i=1;i<n;i++)
  {
    c=max(a[i],c+a[i]);
    z=max(z,c);
  }
  printf("%d",z);
}

#include<stdio.h>
int main()
{
  int n,a[30],z,t=0,flag;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<n;i++)
  {
    if(a[i]==-1)
      continue;
    z=a[i];
    flag=0;
    for(int j=i+1;j<n;j++)
    {
      if(z==a[j])
      {
        flag=1;
        a[j]=-1;
      }
    }
    if(flag==1)
      t++;
  }
  printf("%d",t);
  return 0;
}

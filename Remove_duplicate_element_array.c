#include<stdio.h>
int main()
{
  int a[100],n,z=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(int i=1;i<=n;i++)
  {
    if(a[i]==-1)
      continue;
    z=a[i];
    for(int j=i+1;j<=n;j++)
    {
      if(a[j]==-1)
        continue;
      if(z==a[j])
        a[j] = -1;
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(a[i] != -1)
      printf("%d ",a[i]);
  }

}

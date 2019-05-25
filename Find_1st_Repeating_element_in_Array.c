#include<stdio.h>
int main()
{
  int a[100],n,ans=0,z,flag=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<n;i++)
  {
    if(flag==1)
      break;
    z=a[i];
    for(int j=i+1;j<n;j++)
    {
      if(z==a[j])
      {
        ans=z;
        flag=1;
        break;
      }
    }
  }
  printf("%d",ans);
}

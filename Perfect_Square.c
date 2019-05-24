#include<stdio.h>
#include<math.h>
int main()
{
  int n,flag=0;
  scanf("%d",&n);
  for(int i=0;i<=n/2;i++)
  {
    if(i*i==n)
    {
       flag=1;
       break;
    }
  }
  if(flag)
    printf("yes perfect square");
  else
    printf("Not a perfect square");
}

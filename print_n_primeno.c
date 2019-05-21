#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
    int flag=1;
    for(int j=2;j<=i-1;j++)
    {
      if(i%j==0)
      {
        flag=0;
        break;
      }
    }
    if(flag==1)
      printf("%d ",i);
  }
  return 0;
}

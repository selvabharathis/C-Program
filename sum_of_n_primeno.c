#include<stdio.h>
int main()
{
  int num,sum=0;
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
    int c=0;
    for(int j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        c++;
        break;
      }
    }
    if(c==0 && c!=1)
      sum=sum+i;
  }
  printf("Sum of %d prime number is %d ",num,sum);
  return 0;
}

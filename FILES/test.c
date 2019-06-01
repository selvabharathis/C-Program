#include<stdio.h>
int main()
{
  int a[10],sum=0;
  for(int i=0;i<9;i++)
    scanf("%d",&a[i]);
  printf("%d ",sum);
  for(int j=0;j<9;j++)
  {
    sum = sum + a[j];
    printf("%d ",sum);
  }
}

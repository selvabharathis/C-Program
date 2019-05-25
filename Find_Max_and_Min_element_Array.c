#include<stdio.h>
int main()
{
  int a[100],n,min,temp;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(int i=1;i<=n-1;i++)
  {
    min=i;
    for(int j=i+1;j<=n;j++)
    {
      if(a[j]<a[min])
        min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  printf("Minimum value = %d",a[1]);
  printf("\nMaximum value = %d",a[n]);
}

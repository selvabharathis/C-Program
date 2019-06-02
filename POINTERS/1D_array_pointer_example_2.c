#include<stdio.h>
int main()
{
  int a[15],*p,n;
  printf("enter n = ");
  scanf("%d",&n);
  printf("enter element = ");
  for(int i=0;i<n;i++)
    scanf("%d",a+i);  // scanf("%d",&a[i]);
  p = &a[0];  // p = a;
  for(int i=0;i<n;i++)
  {
    printf("%d  ",*p);
    p++;
  }
  return 0;
}

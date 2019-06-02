#include<stdio.h>

int *myfunction(int []);

int main()
{
  int a[30],n,*z;
  printf("enter array limit = ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  z = myfunction(a);
  for(int i=0;i<n;i++)
  {
    printf("%d  ",*z);
    z++;
  }
}

int *myfunction(int b[])
{
  int *p;
  p = &b[0]; // p = b;
  return p;
}

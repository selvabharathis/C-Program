#include<stdio.h>

void myFunction(int,int []);

int main()
{
  int a[10],n;
  printf("enter limit = ");
  scanf("%d",&n);
  printf("\nenter array = ");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  myFunction(n,a);
  return 0;
}

void myFunction(int k,int b[])
{
  for(int itr=0;itr<k;itr++)
    printf("%d  ",b[itr]);
}

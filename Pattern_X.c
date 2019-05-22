#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++,printf("\n"))
    for(int j=1;j<=n;j++)
    {
      if(i==j || j==n-i+1)
        printf("*");
      else
        printf(" ");
    }
}

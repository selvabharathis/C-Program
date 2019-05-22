#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++,printf("\n"))
  {  for(int j=1;j<=n-i;j++)
        printf(" ");
      for(int j=1;j<=i;j++)
        printf("*");
  }


}

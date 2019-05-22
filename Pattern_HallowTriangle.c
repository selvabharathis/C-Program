#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++,printf("\n"))
      for(int j=1; j<=i; j++)
      {
        if(j==1 || j==i || i==n)
          printf("*");
        else
          printf(" ");
      }
return 0;
}

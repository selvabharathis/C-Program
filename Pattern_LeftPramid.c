#include<stdio.h>
int main()
{
  int n,c=1;
  scanf("%d",&n);
  for(int i=1;i<n*2;i++)
  {
    for(int j=1; j<=c; j++)
      printf("*");
    if(i < n)
      c++;
    else
      c--;
    printf("\n");
  }

}

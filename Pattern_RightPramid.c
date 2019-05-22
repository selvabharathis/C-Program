#include<stdio.h>
int main()
{
  int n,c=1,cc;
  scanf("%d",&n);
  cc=n;
  for(int i=1;i<2*n;i++)
  {
    for(int j=1;j<=cc-1;j++)
      printf(" ");
    for(int j=1;j<=c;j++)
      printf("*");
    if(i<n){
      cc--;
      c++;
    }
    else{
      cc++;
      c--;
    }
    printf("\n");
  }
}

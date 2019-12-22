#include<stdio.h>
int main()
{
  int i=0,j,k,n=4;
  while(i++<n)
  {
    if(i%2==1)
      k=1;
    else
      k=0;
    for(j=1;j<=i;j++,k+=1)
      printf("%d",k);
    printf("\n");
  }
}

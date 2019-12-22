#include<stdio.h>
int main()
{
  int s[] = {1,0,5,0,10,0};
  int f[] = {2,4,6,8,10,12};
  int n=6,i=0,j=0;
  for(j=1;j<n;j++)
  {
    if(s[j]>=f[i])
    {
      printf("%d",i);
      i=j;
    }
  }
}

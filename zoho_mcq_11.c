#include<stdio.h>
int find(int j)
{
  if(j>1)
  {
    j=find(j/10)-(j%10);
    printf("%d\t",j);
  }
  else
    j=0;
  return j;
}
void main()
{
  int i=9093;
  int k;
  k=find(i);
}

#include<stdio.h>
int main()
{
  int c[] = {5,4,3,4,5};
  int j,*q=c;
  for(j=0;j<5;j++)
  {
    printf("%d",*c);
    ++q;
  }
}

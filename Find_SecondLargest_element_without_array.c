/*
input      : -840 -288 -261 -337 -335 488 -1
Note       : if -1 is given take it user wants to end the input statement.
condition  : you should not use the array.
output     : -261
*/
#include<stdio.h>
int main()
{
  int a,firmax,secmax;
  scanf("%d",&a);
  firmax = secmax = a;
  while(1)
  {
    scanf("%d",&a);
    if(a==-1)
      break;
    else if(a > firmax)
    {
      secmax = firmax;
      firmax = a;
    }
    else if(a > secmax)
      secmax = a;
  }
  printf("%d",secmax);
}

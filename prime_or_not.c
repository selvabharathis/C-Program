#include<stdio.h>
int main()
{
  int num,c=0,i;
  scanf("%d",&num);
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
    {
      c++;
      break;
    }
  }
  if(c==0)
    printf("prime number");
  else
    printf("Not a prime number");
}

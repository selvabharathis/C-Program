#include <stdio.h>
int main()
{
  int n,temp,sum=1;
  scanf("%d",&n);
  while(n!=0)
  {
    temp=n%10;
    sum=sum*temp;
    n=n/10;
  }
  printf("Sum of digit = %d",sum);
}

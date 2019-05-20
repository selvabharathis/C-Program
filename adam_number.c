#include<stdio.h>
int reverse(int a)
{
  int rem,sum=0;
  while(a!=0)
  {
    rem=a%10;
    sum=sum+rem;
    a=a/10;
  }
  return sum;
}
int square(int a)
{
  return a*a;
}
int main()
{
  int a,ans1,ans2;
  scanf("%d",&a);
  ans1=reverse(square(a));
  ans2=reverse(a);
  if(ans1==square(ans2))
    printf("Yes adam no.");
  else
    printf("No its not a adam no.");
  return 0;
}

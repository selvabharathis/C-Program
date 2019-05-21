#include<stdio.h>
int sumoffactor(int a)
{
  int sum=0;
  for(int i=1;i<a;i++)// haha just put i=0 at initialization and have fun with wrong answer, since a%0 is mathematical error, and compiler wont show any warning or error.
  {
    if(a%i==0)
      sum=sum+i;
  }
  return sum;
}
int main()
{
  int a,b,ans1,ans2;
  scanf("%d%d",&a,&b);
  ans1=sumoffactor(a);
  ans2=sumoffactor(b);
  if(ans1==b && ans2==a)
    printf("Yes Amicable number");
  else
    printf("Not a Amicable number");
}

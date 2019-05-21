#include<stdio.h>
int main()
{
  int num,temp,sum=0,rem;
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {
    rem=temp%10;
    sum=sum+(rem*rem*rem);
    temp=temp/10;
  }
  if(num==sum)
    printf("Yes Amstrong number");
  else
    printf("Not a Amstrong number");
}

#include<stdio.h>
int main()
{
  int num,power=1,safe,rem;
  scanf("%d",&num);
  safe=num;
  while(safe)
  {
    safe = safe / 10;
    power = power * 10;
  }
  power = power / 10;
  printf("my power value%d\n",power);
  while(pow)
  {
    rem = num / power;
    printf("\n%d",rem);
    num = num % power;
    power /= 10;
  }
}

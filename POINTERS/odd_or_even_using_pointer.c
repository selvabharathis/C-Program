#include<stdio.h>
int main()
{
  int a,*p;
  printf("Enter a value = ");
  scanf("%d",&a);
  p = &a;
  if(*p % 2 == 0)
    printf("\neven");
  else
    printf("\nodd");
}

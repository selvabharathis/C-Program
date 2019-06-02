#include<stdio.h>
int main()
{
  int a[5] = {10,20,30,40,50};
  printf("\naddress of a = %d",a);
  for(int i=0;i<5;i++)
    printf("\n%i  %d",*(a+i),(a+i));
}

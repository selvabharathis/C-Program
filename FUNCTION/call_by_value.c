/*
In call by value we only send the copy of the value, so what ever we do changes with that value,
won't reflect to the variables in the main()
*/
#include<stdio.h>

void myFunction(int,int);

int main()
{
  int a,b;
  printf("enter a and b = ");
  scanf("%d%d",&a,&b);
  myFunction(a,b);
  printf("\nvalue of a and b after the execution of function = %d  %d",a,b);
  return 0;
}

void myFunction(int a,int b)
{
  a=a+1;
  b=b+1;
  printf("\nvalue of a and b inside the function = %d  %d",a,b);
}

/*
In call by reference we only send the address of the value, so what ever we do changes with that value,
it get reflect to the variables in the main()
*/
#include<stdio.h>

void myFunction(int *,int *);

int main()
{
  int a,b;
  printf("enter a and b = ");
  scanf("%d%d",&a,&b);
  myFunction(&a,&b); // we are sending the address of a and b.
  printf("\nvalue of a and b after the execution of function = %d  %d",a,b);
  return 0;
}

void myFunction(int *a,int *b)//* is used to retrive the value, stored in the address.
{
  *a=*a+1;
  *b=*b+1;
  printf("\nvalue of a and b inside the function = %d  %d",*a,*b);
}

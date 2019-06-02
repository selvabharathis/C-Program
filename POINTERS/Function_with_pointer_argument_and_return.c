// Area of rectangle
#include<stdio.h>

int *myfunction(int *,int *);

int main()
{
  int a,b,*ans,*p,*q;
  printf("Enter a and b = ");
  scanf("%d%d",&a,&b);
  p = &a;
  q = &b;
  ans = myfunction(p,q);  //ans = myfunction(&a,&b); ans is the copy of w.
  printf("\n value of ans = %d",ans);
  printf("\n address of ans = %d",&ans);
  printf("\narea of rectangle = %d",*ans);
  return 0;
}

int *myfunction(int *x,int *y)
{
  int *w,a;
  a = ((*x) * (*y));
  w = &a;
  printf("\n value of a = %d",a);
  printf("\n address of a = %d",&a);
  printf("\n value of w = %d",w);
  printf("\n address of w = %d",&w);
  printf("\n dereference of w = %d",*w);
  return w;
}

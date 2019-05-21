#include<stdio.h>
int fact(int n)
{
  if(n>=1)
    return (n*fact(n-1));
  else
    return 1;
}
int main()
{
  int a,ans;
  scanf("%d",&a);
  ans=fact(a);
  printf("factorial of %d is %d ",a,ans);
  return 0;
}
/*
explanation
            fact(4);
            if(4>=1) 4*fact(3)
            if(3>=1) 4*3*fact(2)
            if(2>=1) 4*3*2*fact(1)
            if(1>=1) 4*3*2*1*fact(0)
            if(0>=1) return 1; now return is default tend to multiply as we give 1 and return has already 24 in its
            stack so 1*24 is returned to main()
            if we give return ;
            2*24 is returned to main();

*/

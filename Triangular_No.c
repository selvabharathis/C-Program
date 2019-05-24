/*

A number is termed as triangular number if we can represent it in the form of triangular grid of points
such that the points form an equilateral triangle and each row contains as many points as the row number,
i.e., the first row has one point, second row has two points, third row has three points and so on.
The starting triangular numbers are 1, 3 (1+2), 6 (1+2+3), 10 (1+2+3+4).

 * -----> 1  //1st row has 1 -*

  *
 * *  --------> 3 //2nd row has 2 -*

   *
  * *
 * * * --------> 6 //3rd row has 3 -*

   *
  * *
 * * *
* * * *  ---------> 10 //4th row has 4 -*


*/

#include<stdio.h>
int main()
{
  int n,flag=0,sum=0;
  scanf("%d",&n);
  for(int i=1;sum<=n;i++)
  {
    sum=sum+i;
    if(sum==n)
      flag=1;
  }
  if(flag==1)
    printf("Yes it's a triangular number");
  else
    printf("Not a triangular number");
}

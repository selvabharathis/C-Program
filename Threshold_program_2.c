/*
Given an array of n No. and a window of size A.Find avg of all element in that window.
input :   6 // array element size
          3 //window size
          5 8 10 13 6 2 //array

output : 7 10 9 7

*/
#include<stdio.h>
int main()
{
  int n,win,a[100];
  scanf("%d%d",&n,&win);
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int begin=0,sum=0;begin<=n-win;begin++)
  {
    for(int j=0;j<win;j++)
        sum=sum+a[begin+j];
    printf("%d ",sum/win);
    sum=0;
  }
}

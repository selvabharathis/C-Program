#include<stdio.h>
int main()
{
  int n,temp,a[1000];
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(int i=1;i<=n-1;i++)    // this for is used to run loop for n-1 time.
    for(int j=1;j<=n-i;j++)
    {
      if(a[j+1]<a[j])
      {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
    }
  for(int i=1;i<=n;i++)
    printf("%d ",a[i]);
  return 0;
}

/*
In bubble sort we plan to move the largest value to end of the array.

7-8 5 2 4 6 3
7 8-5 2 4 6 3
7 5 8-2 4 6 3
7 5 2 8-4 6 3
7 5 2 4 8-6 3
7 5 2 4 6 8-3
7 5 2 4 6 3|8

7-5 2 4 6 3|8
5 7-2 4 6 3|8
5 2 7-4 6 3|8
5 2 4 7-6 3|8
5 2 4 6 7-3|8
5 2 4 6 3|7 8

5-2 4 6 3|7 8
2 5-4 6 3|7 8
2 4 5-6 3|7 8
2 4 5 6-3|7 8
2 4 5 3|6 7 8

2-4 5 3|6 7 8
2 4-5 3|6 7 8
2 4 5-3|6 7 8
2 4 3|5 6 7 8

2-4 3|5 6 7 8
2 4-3|5 6 7 8
2 3|4 5 6 7 8

2-3|4 5 6 7 8
2|3 4 5 6 7 8

2 3 4 5 6 7 8

*/

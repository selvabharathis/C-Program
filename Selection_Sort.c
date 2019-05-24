#include<stdio.h>
int main()
{
  int a[100],n,min,temp;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(int i=1;i<=n-1;i++)
  {
    min=i;
    for(int j=i+1;j<=n;j++)
    {
      if(a[j]<a[min])
        min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  for(int i=1;i<=n;i++)
    printf("%d ",a[i]);
  return 0;
}

/*
In selection sort we plan to get the smallest element and put it in assending order by choosing the smallest next
element's index. we select the element and interchange.

7 8 5 2 4 6 3
2|8 5 7 4 6 3
2 3|5 7 4 6 8
2 3 4|7 5 6 8
2 3 4 5|7 6 8
2 3 4 5 6|7 8
2 3 4 5 6 7|8
2 3 4 5 6 7 8

*/

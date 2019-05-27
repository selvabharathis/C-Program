/*
binary search is used to search an item in a sorted list.
binary search locates an item in a sorted array by repeatedly dividing the search interval in half.
no. of comparision is less than compared to linear search.
Time complexity O[log N].
*/
#include<stdio.h>
int main()
{
  int element,a[100],lower,upper,middle,flag=0,size,min,temp;
  scanf("%d",&size);
  for(int i=1;i<=size;i++)
    scanf("%d",&a[i]);
  printf("enter the element to search = ");
  scanf("%d",&element);
  //sorting the array....
    for(int i=1;i<=size-1;i++)
    {
      min=i;
      for(int j=i+1;j<=size;j++)
      {
        if(a[j]<a[min])
          min=j;
      }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
    }
  //binary search algorithm
  lower = 1;
  upper = size;
  while(lower <= upper)
  {
    middle = (lower + upper) / 2;
    if(a[middle] == element)
    {
      flag = 1;
      break;
    }
    else if(a[middle] < element)
      lower = middle + 1;
    else
      upper = middle - 1;
  }
  if(flag == 1)
    printf("Element found");
  else
    printf("Not found");

}

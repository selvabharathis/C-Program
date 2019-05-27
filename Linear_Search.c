/*
It is the method of finding a particular value in a list that checks each element in sequence order utill the desired element is found.
list need not to be in ordered.
it starts at begning of array and moves till to the search element or end of array.
Time complexity O[n].

*/
#include<stdio.h>
int main()
{
  int a[100],size,element,flag=0;
  scanf("%d",&size);
  for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
  printf("enter element to search = ");
  scanf("%d",&element);
  for(int i=0;i<size;i++)
  {
    if(element == a[i])
    {
      flag=1;
      break;
    }
  }
  if(flag == 1)
    printf("Element found");
  else
    printf("Element not found");
}

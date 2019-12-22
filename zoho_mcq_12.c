#include<stdio.h>
void main()
{
  int arr[]={1,4,3,3,4,1};
  int i,j,k=1,s=6;
  for(i=1;i<s;i++)
  {
    for(j=0;j<k;j++)
    {
      if(arr[i]==arr[j])
        break;
    }
    if(j==k)
      arr[k++]=arr[i];
  }
  for(i=0;i<k;i++)
    printf("%d ",arr[i]);
}

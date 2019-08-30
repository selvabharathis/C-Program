//input   : size=4 , key=3 , message = [4,2,-5,11]
//output  : 8 10 17 1

#include<stdio.h>
int main()
{
  int size,key,message[100],output[100],temp,z=0,sum=0;
  scanf("%d",&size);
  scanf("%d",&key);
  for(int i=0;i<size;i++)
    scanf("%d",&message[i]);
  for(int i=1;i<size+1;i++)
  {
    sum = 0;
    for(int j=0;j<key;j++)
    {
      temp = (i+j)%size;
      sum = sum + message[temp];
    }
    output[z++] = sum;
  }
  for(int i=0;i<z;i++)
    printf("%d ",output[i]);
}

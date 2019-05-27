#include<stdio.h>
#include<math.h>
int main()
{
  int decimal=0,rem,binary,i=0;
  scanf("%d",&binary);
  while(binary)
  {
    rem = binary % 10;

    decimal = decimal + rem * pow(2,i);
    binary = binary /10;
  ++i;
  }
  printf("%d",decimal);
}

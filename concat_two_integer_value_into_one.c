#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int a=23,b=43,c;
  char s1[20],s2[20];
  sprintf(s1,"%d",a);// converting integer to string. or use itoa(number,char array variable,base(binary,octa,hexa));
  sprintf(s2,"%d",b);
  //itoa(b,s2,10);
  strcat(s1,s2);// attaching s2 string in s1.
  c = atoi(s1);// converting string to integer.
  printf("%d",c);
}

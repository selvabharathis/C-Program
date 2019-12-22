#include<stdio.h>
int main()
{
  int i=0,j=0,c=0;
  char str[]={"zoho corp-chennai"};
  while(str[i]!='\0')
  {
    j=i;
    while((str[j]!=' ')&&(str[j]!='\0'))
        j++;
    if(j--==' ')
      c++;
    i=j+1;
  }
  printf("%d",c);
  return 0;
}

#include<stdio.h>
int main()
{
  char a[30],b[30];
  int i=0,j=0;
  gets(a);
  while(a[i] != 0)// 0 or NULL or \0
  {
    if(a[i] != ' ')
      b[j++] = a[i];
    i++;
  }
  b[j] = '\0';
  puts(b);
}

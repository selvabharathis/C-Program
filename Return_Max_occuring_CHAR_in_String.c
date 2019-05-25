/*
test return t as answer
while Test return T as answer. char ascii value differ ans so sensitive with caps and small.
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int count[256] = {0},max = -1;
  char str[100],result;
  scanf("%[^\n]s",str);
  int len = strlen(str);
  for(int i=0;i<len;i++)
    count[str[i]]++;
  for(int i=0;i<len;i++)
  {
    if(max < count[str[i]])
    {
      max = count[str[i]];
      result = str[i];
    }
  }
  printf("%c",result);
}

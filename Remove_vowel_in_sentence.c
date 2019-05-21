#include<stdio.h>
char *vowelremover(char str[])
{
  int ind,always,aswewish;//two friends algorithm
  for(always=0,aswewish=0;str[always];always++)
  {
    switch(str[always])
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': break;
      default: str[aswewish++]=str[always];
    }
  }
  str[aswewish]=NULL;
  return str;
}
int main()
{
  char str[1000],*ans;
  scanf("%[^\n]s",str);
  ans=vowelremover(str);
  printf("%s",ans);
}

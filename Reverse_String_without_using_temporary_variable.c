#include<stdio.h>
#include<string.h>
int main()
{
  char str[1000];
  int start=0,end;
  scanf("%[^\n]s",str);
  end=strlen(str);
  end--;
  while(start < end)
  {
    str[start] ^= str[end];
    str[end]   ^= str[start];
    str[start] ^= str[end];
    ++start;
    --end;
  }
  printf("%s",str);
}

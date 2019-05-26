#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  scanf("%[^\n]s",str);
  int len=strlen(str);
  for(int i=0; i<len ;i++)
  {
    int j=len-1-i;
    for(int k=0; k<len ;k++)
    {
      if(k==i || k==j)
        printf("%c",str[k]);
      else if((k>j) && (k>i)) // use this to eliminate the _ after 2nd diagonal
        break;
      else
        printf("_");
    }
    printf("\n");
  }
}

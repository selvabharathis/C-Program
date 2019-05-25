#include<stdio.h>
#include<string.h>
char* reverseWords(char *str)
{
  int l=strlen(str),k=0,z=0,j=0;
  char re[300][300],new[1000],*ptr;
  for(int i=0 ; i<l ; i++)
  {
    if(str[i]==' ')
    {
      re[k][j++]=' ';
      re[k++][j]='\0';
      j=0;
    }
    else
      re[k][j++] = str[i];
  }
  re[k][j++] = ' ';
  re[k][j] = '\0';
  for(int i=k;i>=0;i--)
  {
    for(int j=0;re[i][j]!='\0';j++)
    {
      new[z] = re[i][j];
      z++;
    }
  }
  new[z-1] = '\0';
  ptr = new;
  return ptr;
}

int main()
{
  char str[1000],*p;
  scanf("%[^\n]s",str);
  p = reverseWords(str);
  printf("%s",p);
  return 0;
}

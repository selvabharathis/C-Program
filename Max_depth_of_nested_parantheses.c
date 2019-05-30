/*
we are given a string having parenthesis like "(((X))(((Y))))"
we need to find the maximum depth of balanced parenthesis, like 4 in
above example. Since 'Y' is surrounded by 4 balanced parenthesis.

if parenthesis are unbalanced then return -1.

test case 1 : input : "(p((q))((s)t))"     output : 3

test case 2 : input : "b)(c)()"            output : -1

*/
#include<stdio.h>
int main()
{
  int max,current_max;
  char str[500];
  max=current_max=0;
  scanf("%[^\n]s",str);
  for(int i=0;str[i];i++)
  {
    if(str[i] == '(')
    {
      current_max++;
      if(current_max > max)
        max = current_max;
    }
    else if(str[i] == ')')
    {
      if(current_max > 0)
        current_max--;
      else
      {
        max = -1;
        break;
      }
    }
  }
  printf("%d",max);
}

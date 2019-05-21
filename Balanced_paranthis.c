#include<stdio.h>
int main()
{
  char str[100];
  int count=0;
  scanf("%[^\n]s",str);
  for(int itr=0 ; ((str[itr] != NULL) && (count != -1));itr++)
  {
    if(str[itr]=='(')
      count++;
    else if(str[itr]==')')
      count--;
    else
      continue;
  }
  if(count==0)
    printf("Balanced");
  else
    printf("Not Balanced");
}

#include<stdio.h>
#include<string.h>
int main()
{
  int flag = 0,index_at_substring = -1;
  char str1[100],str2[100];
  gets(str1);
  gets(str2);
  int l1=strlen(str1);
  int l2=strlen(str2);
  for(int i=0; i<=l2-l1;i++)
  {
    if(flag == 1)
      break;
    int j;
    for(j=0;j<l1;j++)
    {
      if(str2[i+j] != str1[j])
        break;
    }
      if(j == l1)
      {
        index_at_substring = i;
        flag = 1;   // after finding the substring presence we make flag 1 and exit the checking for substring.
      }
  }
  if(index_at_substring == -1)
    printf("No substring is present in main string");
  else
    printf("Yes substring is present at index %d",index_at_substring);
}

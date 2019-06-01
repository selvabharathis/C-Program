#include<stdio.h>
int main()
{
  FILE *fp;
  char buffer[1000];
  fp = fopen("abc.txt","r");
  fscanf(fp,"%[^\n]s",buffer);
  printf("%s",buffer);
  fclose(fp);
  return 0;
}

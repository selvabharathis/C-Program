#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch;
  FILE *fp1,*fp2;
  fp1 = fopen("input.txt","r");
  fp2 = fopen("output.txt","w");
  if(fp1==NULL && fp2==NULL)
  {
    printf("File Not Found : Error 404");
    exit(0);
  }
  else
  {
    ch = fgetc(fp1);
    while(ch != EOF)
    {
      fputc(ch,fp2);
      ch = fgetc(fp1);
    }
  }
  fclose(fp1);
  fclose(fp2);
  return 0;
}

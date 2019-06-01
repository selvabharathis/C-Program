#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=0,count;
  char ch;
  FILE *fp1,*fp2;
  fp1 = fopen("king.txt","r");// we also have a access mode 'a' used to append content to the file, there are plenty of access mode available.
  fp2 = fopen("queen.txt","w");
  if(fp1==NULL && fp2==NULL)
  {
    printf("File Not Found : Error 404");
    exit(0);
  }
  else
  {
    fseek(fp1,0,2);
    count = ftell(fp1);
    printf("%d",count);
    while(i < count);
    {
      i++;
      fseek(fp1,-i,2);
      ch = fgetc(fp1);
      fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
  }
  return 0;
}

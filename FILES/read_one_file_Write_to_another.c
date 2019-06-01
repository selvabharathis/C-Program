#include<stdio.h>
int main()
{
  int rollno;
  char name[100];
  float a;
  FILE *fp1,*fp2;
  fp1 = fopen("a.txt","r");
  fp2 = fopen("c.txt","w");
  fscanf(fp1,"%d%s%f",&rollno,name,&a);
  fprintf(fp2,"%d  %s  %f",rollno,name,a);
  fclose(fp1);
  fclose(fp2);
  return 0;
}

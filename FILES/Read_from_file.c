#include<stdio.h>
int main()
{
  int rollno;
  char name[100];
  float avg;
  FILE *fp;
  fp = fopen("a.txt","r");
  fscanf(fp,"%d%s%f",&rollno,name,&avg);
  printf("%d  %s  %f",rollno,name,avg);
  fclose(fp);
  return 0;
}

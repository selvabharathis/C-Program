#include<stdio.h>
int main()
{
  int rollno;
  char name[100];
  float avg;
  FILE *fp;
  fp = fopen("b.txt","w");
  printf("Enter rollno, name, avg = ");
  scanf("%d%s%f",&rollno,&name,&avg);
  fprintf(fp,"%d  %s  %f",rollno,name,avg);
  fclose(fp);
  return 0;
}

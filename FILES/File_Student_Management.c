/*
write a program to read 10 student record from file, and calculate total and average and write the data to the console and another file,
 using for loop.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int rollno,m1,m2,m3,total,i;
  char name[30];
  float avg;
  FILE *fp1,*fp2;
  fp1 = fopen("in.txt","r");
  fp2 = fopen("out.txt","w");
  if((fp1==NULL)&&(fp2==NULL))
  {
    printf("File Not Found : Error 404");
    exit(0);
  }
  else
  {
    fprintf(fp2,"rollno\tname\tm1\tm2\tm3\n");
    for(int i=0;i<10;i++)
    {
      fscanf(fp1,"%d%s%d%d%d",&rollno,name,&m1,&m2,&m3);
      printf("rollno = %d\tname = %s\tm1 = %d\tm2 = %d\tm3 = %d\n",rollno,name,m1,m2,m3);
      fprintf(fp2,"%d\t%s\t%d\t%d\t%d\n",rollno,name,m1,m2,m3);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
  }
}

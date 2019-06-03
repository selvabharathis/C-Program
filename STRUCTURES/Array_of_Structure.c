#include<stdio.h>

struct student
{
  int rollno,m1,m2,m3,total;
  float avg;
  char name[30];
}s[10];

int main()
{
  int n;
  printf("enter n = ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\nenter student details %d = ",i);
    scanf("%d%s",&s[i].rollno,s[i].name);
    printf("\nenter mark of student %d = ",i);
    scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
  }
  for(int i=0;i<n;i++)
  {
    s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    s[i].avg = s[i].total / 3;
    printf("\nStudent %d total = %d  avg = %f",i,s[i].total,s[i].avg);
  }
}

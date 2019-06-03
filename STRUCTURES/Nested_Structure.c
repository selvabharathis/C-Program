#include<stdio.h>

struct employee
{
  int e_id;
  char name[20],dept[20];
  struct dates
  {
    int date,month,year;
  }dob;
}emp[10];

int main()
{
  int n;
  printf("enter n = ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\nEnter employee%d id, name, dept, DOB = ",i);
    scanf("%d%s%s%d",&emp[i].e_id,emp[i].name,&emp[i].dept,&emp[i].dob.date);
  }
  for(int i=0;i<n;i++)
  {
    printf("\nemployee%d id = %d  name = %s  dept = %s  DOB = %d",i,emp[i].e_id,emp[i].name,emp[i].dept,emp[i].dob.date);
  }
}

#include<stdio.h>

struct student
{
  int rollno; // size of int 4
  char name[30]; // size of char 1
  float avg; // size of float 4
}s,*s1; // size of any pointer is 8

void myfunction(struct student *);

int main()
{
    printf("enter rollno, name, avg = ");
    scanf("%d%s%f",&s.rollno,s.name,&s.avg);
    s1 = &s; // s1=s;
    myfunction(s1);
    return 0;
}

void myfunction(struct student *p)
{
  printf("\nrollno=%d  name=%s  avg=%f",p->rollno,p->name,p->avg);
}

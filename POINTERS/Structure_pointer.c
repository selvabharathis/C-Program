#include<stdio.h>

struct student
{
  int rollno; // size of int 4
  char name[30]; // size of char 1
  float avg; // size of float 4
}s,*s1; // size of any pointer is 8

int main()
{
  printf("size of s = %d",sizeof(s));
  printf("\nsize of *s1 = %d",sizeof(*s1));
  printf("\nsize of s1 = %d",sizeof(s1));
  printf("\nsize of struct student = %d",sizeof(struct student));
  printf("\naddress of struct student = %d",&s);
  printf("\n\n");
  printf("\nenter rollno, name, avg = ");
  scanf("%d%s%f",&s.rollno,s.name,&s.avg);
  s1 = &s; // s1=s;
  printf("\nrollno=%d  name=%s  avg=%f",s1->rollno,s1->name,s1->avg);
  return 0;
}

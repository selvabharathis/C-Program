/*
>> structure is a collection of one or more variables of different data type grouped together under a single name.
>> It is a user defined datatype because the user has to write and decide the type of data to be included in a structure.
>> It plays roles with database.
>> The memory allocation takes place only when structure variables are declared.
*/
#include<stdio.h>

struct student
{
  int rollno;
  char name[30];
  float avg;
}s;

int main()
{
  struct student s1={101,"xyz",90.9};
  struct student s2;
  printf("enter details for students--S = ");
  scanf("%d%s%f",&s.rollno,s.name,&s.avg);
  printf("enter details for students--S2 = ");
  scanf("%d%s%f",&s2.rollno,s2.name,&s2.avg);
  printf("\nstudent S --> rollno = %d  name = %s  avg = %f",s.rollno,s.name,s.avg);
  printf("\nstudent S1 --> rollno = %d  name = %s  avg = %f",s1.rollno,s1.name,s1.avg);
  printf("\nstudent S2 --> rollno = %d  name = %s  avg = %f",s2.rollno,s2.name,s2.avg);
}

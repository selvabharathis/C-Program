/*
FUNCTION POINTER DECLARATION  :         return_type (*pointer_variable_name)(arguments);

INITILIZATION                 :         pointer_variable_name = &(function_name);

FUNCTION POINTER CALL         :         (*pointer_variable_name)(arguments);
*/
#include<stdio.h>

void display();

int main()
{
  void (*p)();
  p = &display;
  (*p)();
  return 0;
}

void display()
{
  printf("hai i am robot 2.0");
}

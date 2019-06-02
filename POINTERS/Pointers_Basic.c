#include<stdio.h>
int main()
{
  int a = 10,*p,**z,*x = NULL;// z is called pointer of pointer.
  float b=20,*q;
  char c='a',*r;
  void *m; // m is a void pointer.
  p = &a;
  q = &b;
  r = &c;
  z = &p;
  printf("a value = %d",a);
  printf("\naddress of a = %d",&a);
  printf("\np value = %d",p);
  printf("\naddress of p = %d",&p);
  printf("\ndereference of p = %d",*p);
  printf("\ndereference of q = %f",*q);
  printf("\ndereference of r = %c",*r);
  printf("\ndereference of p and get the address at its current position = %d",*(&p));
  printf("\ndouble dereferencedereference of z = %d",**z);
  printf("\ndereference of z = %d",*z);
  printf("\nz value = %d",z);
  printf("\naddress of z = %d",&z);
  printf("\nNULL pointer x value = %d",x);
  printf("\np value = %d",p);
  printf("\nq value = %d",q);
  printf("\nr value = %d",r);
  p++;
  q++;
  r++;
  printf("\np value = %d",p);
  printf("\nq value = %d",q);
  printf("\nr value = %d",r);
  m = &a;
  printf("\ndereference of m = %d",*((int *)m));
  m = &b;
  printf("\ndereference of m = %f",*((float *)m));
  m = &c;
  printf("\ndereference of m = %c",*((char *)m));
  printf("\nsize of interger a = %d",sizeof(a));
  printf("\nsize of int datatype = %d",sizeof(int));
  printf("\nsize of float datatype = %d",sizeof(float));
  printf("\nsize of char datatype = %d",sizeof(char));
  printf("\nsize of integer pointer = %d",sizeof(int *));
  printf("\nsize of float pointer = %d",sizeof(float *));
  printf("\nsize of char pointer = %d",sizeof(char *));
  return 0;
}
/*
NULL POINTER
              A pointer that is not assigned any value but null is known as null pointer.

VOID POINTER
            >> Pointer can also declare as void type.
            >> The void pointer cannot be dereference without explicit type.
            >> The compiler cannot determine the size of the object that the pointer points to.
            >> Only these type of pointer we can store any type of address.
            >> This is also called as generic pointer.
            >> To reduce memory size we use void pointer.

FUNCTION POINTER
            >> Function pointer is a memory variable used to store address of another function.
STRUCTURE POINTER
            >> Structure pointer is used to store the address of another structure.
            >> The indirection operator (->) is used to access the structure datamember.
*/

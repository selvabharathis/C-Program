/*
          RANDOM ACCESS FILE

A random access data file enables you to read/ write information any were in the file.
it consists of records that can be accessed in any sequence.
In this concept the record can be read and modified at random even nth record can be accessed directly.

s/x:
    fseek(file_pointer , long offset , orgin);

    orgin : 0--> file pointer moves from begning of the file.
            1--> file pointer moves from current location of the file.
            2--> file pointer moves to the end of file.

    long offset :  It is a long integer which specifies the no. of bytes/ char it should read/ write.

Predefined function :

  ftell(file_pointer); --> return the current position of the file pointer.
  rewind(file_pointer); -->move the file pointer to the starting or begning of the file.

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  fp = fopen("myfile.txt","r");
  if(fp==NULL)
  {
    printf("File Not Found : Error 404");
    exit(0);
  }
  else
  {
    //file pointer index always starts from 1. and end of file is as -1.
    fseek(fp,13,0);
    ch = fgetc(fp);//it also moves fp by 1 and get the char
    printf("\n%d  %c",ftell(fp),ch);//so fp is at 14 U
    fseek(fp,4,1);
    ch = fgetc(fp);//14+4+1=19
    printf("\n%d  %c",ftell(fp),ch);//so fp is at 19 a _
    fseek(fp,0,2);//end is 30 as E.
    ch = fgetc(fp);// we move pointer as we get next char so 31.
    printf("\n%d  %c",ftell(fp),ch);
    fseek(fp,-10,2);//from last we read, the index from last starts at 0, it does not start count from EOF -1, it starts counting from last character only.
    ch = fgetc(fp);//so R is read as it moves the pointer and read.
    printf("\n%d  %c",ftell(fp),ch); // but ftell will tell the index from left to right only.
    rewind(fp);// moves file pointer to 0th position
    ch = fgetc(fp);// it moves and read the 1st char
    // NOTE : we virtually assume that index from left to right starts at 1, since 0th position is just waiting pointer.
    printf("\n%d  %c",ftell(fp),ch);
    fclose(fp);
  }
  return 0;
}

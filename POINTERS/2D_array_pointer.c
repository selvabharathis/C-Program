#include<stdio.h>
int main()
{
  int a[3][3],*p;
  printf("enter array element for 3x3 matrix :\n");
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      scanf("%d",&a[i][j]);
  p = a; // p = &a[0][0];
  for(int i=0;i<3;i++,printf("\n"))
    for(int j=0;j<3;j++)
    {
      printf("%d  ",*p);
      p++;
    }
    return 0;
}

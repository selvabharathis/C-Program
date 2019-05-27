#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=n ; i>1 ; i--,printf("\n"))//top
  {
    for(int j=n ; j>=i ; j--)
      printf("%d",j);
    for(int j=2 ; j<2*i-1 ; j++)
      printf("%d",i);
    for(int j=i ; j<=n ; j++)
      printf("%d",j);
  }
      for(int i=1 ; i<=n ; i++,printf("\n") )//bottom
      {
        for(int j=n ; j>i ; j--)
          printf("%d",j);
        for(int j=1 ; j<=2*i-1 ; j++)
          printf("%d",i);
        for(int j=i+1 ; j<=n ;j++)
          printf("%d",j);
      }
}


/*


  //part---1
  for(int i=n ; i>1 ; i--,printf("\n"))
  {
    for(int j=n ; j>=i ; j--)
    {
      printf("%d",j);
    }
  }
  //part--2  perfect
    for(int i=n ; i>=1 ; i--,printf("\n"))
    {
      for(int j=n; j>=i; j--)
        printf(" ");
      for(int j=1 ; j<=2*i-1 ; j++)
        printf("%d",i);
    }


  //part--3
  for(int i=n ; i>1 ; i--,printf("\n"))
  {  for(int j=n;j>=n-i;j--)
        printf(" ");
      for(int j=i ; j<=n ; j++)
        printf("%d",j);
  }

  //part--4  perfect
  for(int i=1 ; i<n ; i++,printf("\n") )
  {
    for(int j=n ; j>i ; j--)
      printf("%d",j);
  }

  //part--5  perfect
  for(int i=1 ; i<=n ; i++,printf("\n"))
  {
    for(int j=n ; j>i ; j--)
      printf(" ");
    for(int j=1 ; j<=2*i-1 ; j++)
      printf("%d",i);
  }

  //part--6
  for(int i=1 ; i<n ; i++,printf("\n"))
  {
    for(int j=1 ; j<i ; j++)
      printf(" ");
    for(int j=i+1 ; j<=n ;j++)
      printf("%d",j);
  }


  */

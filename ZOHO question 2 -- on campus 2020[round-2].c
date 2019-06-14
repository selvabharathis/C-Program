/*
*ALTERNATE SORTING
*
*size    : 9
*input   : 2 1 4 3 9 8 7 6 5
*output  : 9 1 8 2 7 3 6 4 5
*
*  NOTE : need optimized solution.
*/
#include<stdio.h>
int main()
{
  int n,a[50];
  scanf("%d",&n);
  for(int i=0 ; i<n ; i++)
    scanf("%d",&a[i]);
  for(int i=0 ; i<n-1 ; i++)                    // we will fix every element and wont't see it further.
    for(int j=i+1 ; j<n ; j++)
      {
        if(i%2)                                 // we will put large value 
        {
          if(a[i] > a[j])
            a[i] = a[i] + a[j] - (a[j] = a[i]); // doing swap without temporary variable
        }
        else                                    // we will put small value
        {
          if(a[i] < a[j])
            a[i] = a[i] + a[j] - (a[j] = a[i]); // doing swap without temporary variable
        }
       }
   printf("\n");
   for(int i=0 ; i<n ; i++)
     printf("%d  ",a[i]);
   return 0;
  }

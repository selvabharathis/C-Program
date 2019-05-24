/*
..................................................................................................................
get an array from the user say 'a' 5 8 10 13 6 2 and a threshold value 't' as 3, Then the output should be 17
explanation
3)5(1         3)8(2           3)10(3        3)13(4         3)6(2          3)2(0
  3             6               9             1              0              0
-----         ------          -----         -----          -----          -----
  2             2               1              1             0               2

     |             |                |             |              |            |
     |             |                |             |              |            |
    3+2         3+3+2           3+3+3+1        3+3+3+3+1       3+3+0          2
c=  2      +      3       +        4       +       5       +     2       +    1    = 17

test case 2: 'a'=6 8 2 11 12 15 't'=2 output : 28
.................................................................................................................

*/
#include<stdio.h>
int main()
{
    int arr[]={5,8,10,13,6,2};
    int count=0,thd=3,size,ind;
    size=sizeof(arr)/sizeof(arr[0]);
    for(ind=0;ind<size;ind++)
    {
        count = count + arr[ind] / thd + ( !(arr[ind]%thd==0) );
    }
    printf("%d",count);
}

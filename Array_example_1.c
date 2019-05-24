/*
INDEX            0   1   2   3   4    5   6   7   8   9
ARRAY           46  80  10   8   7    2  11  16  17  43
Order_Index      5   2   0   6   8    7   1   3   4   9
OUTPUT           2  10  46  11  17   16  80   8   7  43   //see the order index if 2, then put the element of array in 2nd index.
:) YOU SHOULD NOT USE MORE THAN TWO ARRAY.

*/

#include<stdio.h>
int main()
{
    int narr[]={46,120,10,8,7,2,11,16,17,43}; //we assume our array element contain value less than 100.
    int oarr[]={5,2,0,6,8,7,1,3,4,9};
    int size,ind;
    size=sizeof(narr)/sizeof(narr[0]);
    for(ind=0;ind<size;ind++)
    {
         if(narr[oarr[ind]] < 100)
            narr[ind]=narr[ind]*100+narr[oarr[ind]];
        else
            narr[ind]=narr[ind]*100+(narr[oarr[ind]]/100); // if our array element is more than 100. we convert to last 2 decimal point.
    }
    for(ind=0;ind<size;ind++)
        printf("%d ",narr[ind]%100);
    return 0;
}

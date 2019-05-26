/*
triangular word SKY
explanation : as per alphabetic order S come at 19th place and K comes at 11th place and Y comes at 25th place.
              the sum of the position such as 19 + 11 + 25 = 55.
              where 55 is a triangular number, SKY is also a triangular word.
Hint        : use ascii table.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int check=0,sum=0;
    scanf("%s",str);
    for(int ind=0;str[ind]!=NULL;ind++)
    {
        sum+=str[ind]-64;
    }
    for(int itr=1;check<sum;itr++)
    {
        check=check+itr;
    }
    if(check==sum)
        printf("triangular word");
    else
        printf("no");
    return 0;
}

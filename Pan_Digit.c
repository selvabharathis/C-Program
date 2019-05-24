/*

A pan number is a 10 digit number, which dont have any repeated digit in it.
example 9876543210 is a pan number
Now add tow number and get a number, but the added two number and result should be a pan number such as
246 + 789 = 1035 where no digit is repeated, also generate the series of pan numbers that can lie below 1000. How many pan number can lie below 1000
HINT :
         9000000000
          800000000
           70000000
            6000000
             500000
              40000
               3000
                200
                 10
                  0
    ------------------
         9876543210    hence a pan number, take all individual digit and rise it to no of its zero and add if it get the final value return true.
*/

#include<stdio.h>
long long int mypow(int pow,int dig)
{
   long long int raise_value=1;
   int itr;
    for(itr=1;itr<=dig;itr++)
    raise_value=pow*raise_value;
    return raise_value;
}
int isuniq(int num1,int num2,int ans)
{
   long long int data,comp_data=0;
   int digit;
    data=((num1*1000+num2)*10000LL+ans);
       while(data)
    {
        digit=data%10;
        comp_data=comp_data+digit*(mypow(10,digit));
        data=data/10;
        }
    if(comp_data==9876543210LL)
        return 1;
    else
        return 0;
}
int main()
{
    int num1,num2,ans=1;
    for(num1=100;num1<999;num1++)
        for(num2=100;num2<999;num2++)
            if((num1+num2>1000)&&(isuniq(num1,num2,num1+num2)))
                printf("%d + %d = %d:%d\n",num1,num2,num1+num2,ans++);
    return 0;
}

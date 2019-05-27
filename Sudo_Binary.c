#include <stdio.h>

int main()
{
    int num=423;
    int rem;
    while(num>0)
    {
       int n=num;
       int sum=0;
       int p=1;
       while(n)
       {
         rem=n%10;
         if(rem!=0)
              sum=sum+(1*p);
         else
            sum=sum+(0*p);
         p=p*10;
         n=n/10;
        }
        printf("%d\n",sum);
        num=num-sum;
      }
return 0;
}

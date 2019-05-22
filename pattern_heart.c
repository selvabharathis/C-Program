#include<stdio.h>
int main()
{
    int num,row,col;
    scanf("%d",&num);
    for(row=num/2;row<=num;row+=2,printf("\n"))
    {
        for(col=1;col<num-row;col+=2)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("*");
        for(col=1;col<=num-row;col+=2)
            printf(" ");
        for(col=1;col<num-row;col+=2)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("*");
        for(col=1;col<=num-row;col+=2)
            printf(" ");
    }
    for(row=num;row>=1;row--,printf("\n"))
    {
        for(col=row;col<num;col++)
            printf(" ");
        for(col=1;col<=row*2-1;col++)
            printf("*");
    }

    return 0;
}

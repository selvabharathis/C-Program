/*
* ZOHO question 1 -- on campus 2020.
* input : program
* output :
*       g                                                                                                               
*      gr                                                                                                               
*     gra                                                                                                               
*    gram                                                                                                               
*   gramp                                                                                                               
*  grampr                                                                                                               
* grampro 
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int l;
    char str[50];
    scanf("%s",str);
    l = strlen(str);
    int g = l/2;
    for(int i=1;i<=l;i++,printf("\n"))
    {
        g = l/2;
        for(int j=1;j<=l-i;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("%c",str[g]);
            g++;
            if(str[g]=='\0')
                g=0;
        }
    }

    return 0;
}

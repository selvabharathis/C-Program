#include <stdio.h>
void abc(int arr[])
{
    int n = sizeof(arr)/sizeof(int);//here arr is a thing which carry the base address, like pointer, pointer is always size 8.
    int f = sizeof(arr[0]);
    int t = sizeof(arr);
    printf("array after passing to function\n");
    printf("%d\n",n);
    printf("%d\n",f);
    printf("%d\n",t);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    int f = sizeof(arr[0]);
    int t = sizeof(arr);
    printf("inside main\n");
    printf("%d\n",n);
    printf("%d\n",f);
    printf("%d\n",t);
    abc(arr);
    return 0;
}

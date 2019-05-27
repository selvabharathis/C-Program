#include <stdio.h>
int main()
{
  int n,a[32],global;
  scanf("%d", &n);
  for(int i=0 ; n > 0 ; i++)
  {
    a[i] = n % 2;
    n = n / 2;
    global = i;
  }
  for(int j=global; j>=0 ; j--)
    printf("%d",a[j]);

  return 0;
}

#include<stdio.h>
int main()
{
  /* code */
  int a,b,r;
  printf("Enter a and b : ");
  scanf("%d%d",&a,&b);
  r = a>b ? a : b;
  printf("%d is Big Number",r);
  return 0;
}

#include<stdio.h>
int main()
{
  /* code */
  int a,b,c,r;
  printf("Enter a,b and c : ");
  scanf("%d%d%d",&a,&b,&c);
  r = a>b ? (a>c ? a : c) : (b>c ? b : c);
  printf("%d is Big Number",r);
  return 0;
}

#include<stdio.h>
int main()
{
  /* code */
  int x = 10;
  int y = 10;
  x++;
  --y;
  printf("%d  %d\n",x++,++x);
  printf("%d  %d\n",++y,y++);
  printf("%d\n",y);
  return 0;
}

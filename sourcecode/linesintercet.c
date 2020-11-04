/*
  find two lines where they are intersecting 
  m1,c1,m2,c2
  x,y
*/
#include<stdio.h>
int main(){
  int x,y,m1,m2,c1,c2;
  printf("Enter first line slope and constant: ");
  scanf("%d%d",&m1,&c1);
  printf("Enter second line slope and constant: ");
  scanf("%d%d",&m2,&c2);
  x = (c2-c1)/(m1-m2);
  y = m1 * x + c1;
  printf("(%d,%d)",x,y);
}
#include<stdio.h>
// declaration
void square(int);
// main method starts here
int main()
{
  int n;
  scanf("%d",&n);
  // function call
  square(n); 
}
// define function
void square(int n)
{
  int sq = n * n;
  printf("square of n is: %d\n",sq);
}
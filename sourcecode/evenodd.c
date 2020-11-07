/*
  given n is even resutl is div by 2 otherwise add 1.
*/
#include<stdio.h>
int main()
{
  /* code */
  int n;
  printf("Enter N value : ");
  scanf("%d",&n);
  if(n%2 == 0){
    printf("N is Even number: \n"); 
    n = n/2;
  } else{
    printf("N is Odd number: \n"); 
    n++;
  }
  printf("%d",n);
  return 0;
}


#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for (int i = 1; i <=n; i++)
  {
    printf("%d Table\n",i);
    for (int j = 1; j<=10; j++)
    {
     printf("%d X %d = %d\n",i,j,i*j);
    }
    printf("\n");
  }
  
}
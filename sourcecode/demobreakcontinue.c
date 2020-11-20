#include<stdio.h>
int main(){
  int x = 10,y = 5;
  for (int i = 0; i < 20; i++)
  {
      if(i==5 || i==8)
        continue;
      if(i==10){
        printf("Break the loop\n");
        break;
      }
      printf("%d\n",i);
  }
}
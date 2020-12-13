#include<stdio.h>
#include<string.h>
int main(){
  char fname[200];
  int i=0,wc=1;
  fgets(fname,200,stdin);
  while(fname[i]!= '\0'){
    if(fname[i] == ' '){
      wc++;
    }
    i++;
  }
  printf("Length of line is: %d\n",i-1);
  printf("# Words: %d",wc);
}
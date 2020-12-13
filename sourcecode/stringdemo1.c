#include<stdio.h>
#include<string.h>
int main(){
  char fname[10],lname[10];
  //scanf("%[^\n]s",fname);
  // gets(fname);
  fgets(fname,10,stdin);
  printf("%lu\n",strlen(fname));
}
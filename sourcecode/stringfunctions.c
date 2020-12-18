#include <stdio.h>
#include <string.h>
int main()
{
  char s1[100] = "The Good Doctor";
  char s2[100] = "ZeroZeroZero";
  char s3[100] = "The Good DOCTOR";
  char s4[100] = "Gooo";
  char s5[100];
  // strcat(s1,s2);
  // strncat(s1,s2,6);
  // printf("%s\n",s1);
  // printf("%s\n",strchr(s1,'G'));
  // printf("%s\n",strrchr(s1,'o'));
  // int res = strcmp(s1,s3);
  // int res = strncmp(s1,s3,10);
  // printf("%d",res);
  // printf("%s",strstr(s1,s4));
  strcpy(s2, s5);
  // strncpy(s5, s2,8);
  printf("%s",s2);
}
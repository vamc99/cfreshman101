#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  fgets(str, 100, stdin);
  int len = strlen(str);
  int flag = 0;
  for (int i = 0, j = len - 2; i < j; i++, j--)
  {
    if(str[i]!=str[j]){
      flag = 1;
      break;
    }
  }
  if(flag == 0)
  {
    printf("Given string is a palindrome\n");
  }
  else
  {
    printf("Given string is not a palindrome\n");
  }
}
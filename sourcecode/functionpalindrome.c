#include<stdio.h>
#include<string.h>
int isPalindrome(char*);
int main()
{
  char str[100];
  fgets(str,20,stdin);
  if(isPalindrome(str))
    printf("Given String is Palindrome\n");
  else
    printf("Given String is Not Palindrome\n");
}

int isPalindrome(char* str)
{
  int len = strlen(str);
  for (int i = 0,j=len-2; i < j; i++,j--)
  {
    if(str[i]!=str[j])
      return 0;
  }
  return 1;
}

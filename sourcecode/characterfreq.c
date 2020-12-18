#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  fgets(s,100,stdin); // reading string
  int len = strlen(s) - 1;
  int freq[26];
  for(int i=0;i<26;i++){
    freq[i] = 0;
  }
  for(int i=0;i<len;i++){
    freq[s[i]-'a']++;
  }
  for(int i=0;i<26;i++){
    if(freq[i]>0)
      printf("%c -> %d\n",i+'a',freq[i]);
  }
}
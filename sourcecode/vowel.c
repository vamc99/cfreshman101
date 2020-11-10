#include<stdio.h>
int main(){
  char alpha;
  scanf("%c",&alpha);// alphabet = getchar(); 
  switch (alpha)
  {
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
    printf("It's an Vowel\n");
    break;
  
  default:
    printf("It's Consonant\n");
    break;
  }
  
  
  
}
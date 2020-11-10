#include <stdio.h>
int main()
{
  /* code */
  int a, b, result = 0;
  char op;
  printf("Enter a and b : ");
  scanf("%d%d", &a, &b);
  getchar();
  printf("Enter your choice \n + addition\n - subtraction\n * Multiplication\n / divition\n");
  scanf("%c", &op);
  // op = getchar();
  switch (op)
  {
  case '+':
    result = a + b;
    printf("%d\n", result);
    break;
  case '-':
    result = a - b;
    printf("%d\n", result);
    break;
  case '*':
    result = a * b;
    printf("%d\n", result);
    break;
  case '/':
    result = a / b;
    printf("%d\n", result);
    break;
  default : printf("Enter correct choice");
    break;
  }

  return 0;
}

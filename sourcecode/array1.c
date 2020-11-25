#include <stdio.h>
int main()
{
  // int arr[5] = {1,3,6,9,10};
  // int arr[5];
  // arr[0] = 1;
  // arr[1] = 3;
  // arr[2] = 6;
  // arr[3] = 9;
  // arr[4] = 6;
  int size;
  scanf("%d",&size);
  int arr[size];
  // read array
  for(int i=0; i< size; i++){
    scanf("%d",&arr[i]);
  }
  printf("{");
  for (int i = 0; i < size; i++)
  {
    printf("%d,", arr[i]);
  }
  printf("}\n");
}
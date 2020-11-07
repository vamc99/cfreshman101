#include<stdio.h>
int main(){
  int a=90,b=50,c=40;
  printf("Enter A,B,C : ");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b+c != 180){
    printf("It is Not triangle\n");
  }else if(a==b && a==c){
    printf("It is an Equilatoral Triangle\n");
  } else if(a<90 && b<90 && c<90){
    printf("It is an Acute Triangle\n");
  } else if(a>90 || b>90 || c>90){
    printf("It is an Obtuse Triangle\n");
  }else if(a==90 || b==90 || c==90){
    printf("It is Right Angle Triangle\n");
  }
  printf("End of the programs\n");
}
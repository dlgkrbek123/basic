#include<stdio.h>
#include"libraryA.h"
#include"libraryB.h"

int main(void){
  int result;
  int a,b;
  scanf("%d %d",&a,&b);
  result=funcA(a)+funcB(b);
  return result;
}
/*
if...else 
*/
#include <stdio.h>
int main() {
  // 局部变量定义
  int a = 100;
  if (a == 10) {
    printf("a的值是10\n");
  }
  else if (a == 20) {
    printf("a的值是20\n" );
  }
  else if (a == 30) {
    printf("a的值是30\n" );
  }
  else {
    printf("没有匹配的值\n" );
  }
  printf("a 的准确值是 %d\n", a );
  return 0;
}
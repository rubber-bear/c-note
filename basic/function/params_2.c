/*
传参 - 传过去的是什么
每个函数都有自己的变量空间，参数也位于这个独立的空间中，和其他函数没有任何的关系
c 语言在调用函数时候，永远只能传值
过去，对于函数参数表中的参数，叫做“形式参数”， 调用函数是给的值叫做“实际参数”

*/
#include <stdio.h>
void swap(int a, int b);

int main() {
  int a = 5;
  int b = 6;
  swap(a, b);
  printf("a=%d b = %d\n", a, b);
  return 0;
}

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;
}
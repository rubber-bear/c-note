/*
运算符 &
  scanf("%d", &i) 里的&
  获得变量的地址，它的操作数必须是变量

&不能取的地址
  &(a+b)
数组中的元素是栈的方式
*/

#include <stdio.h>


int main() {
  int i = 0;
  int p;
  p = (int)&i; // 取地址后类型转换
  printf("0x%x\n", p);
  printf("%p\n", &i);
  return 0;
}
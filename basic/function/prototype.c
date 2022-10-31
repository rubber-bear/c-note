#include <stdio.h>
/*
 函数头，以分号;结尾，就构成了函数的原型
 函数原型的目的就是告诉编译器这个函数长什么样子
  - 名称
  - 参数（数量以及类型）
  - 返回类型
可以不写参数的名称
*/

void sum(int begin, int end); // 声明 （会去检查声明和定义是否一致）

int main()
{
  sum(23, 45);
  return 0;
}

void sum (int begin, int end) { // 定义
  int i;
  int sum = 0;
  for (i = begin; i <= end; i++) {
    sum += 1;
  }
  printf("%d到%d的和是%d\n", begin, end, sum);
}

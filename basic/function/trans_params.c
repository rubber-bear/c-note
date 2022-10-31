/*
函数的参数传递
  如果函数有参数，调用函数u是必须传递给他数量、类型正确的值
  可以传递给函数的值是表达式的结果，包括：
  - 字面量
  - 变量
  - 函数的返回值
  - 计算的结果

如果调用函数时给的值与参数的类型不匹配是c语言传统上最大的漏洞
编译器总是悄悄替你讲类型转换号，但是有可能不是我们所期望的
*/

# include   <stdio.h>
void cheer(int i) {
  printf("cheer!! %d \n", i);
}

int main() {
  double f = 2.4;
  // cheer(2.4);
  cheer(f);    // 此处有隐藏的类型转换， 会有值的损失 ！！！！
  return 0;
}
// warning: implicit conversion from 'double' to 'int' changes value from 2.4 to 2 [-Wliteral-conversion]
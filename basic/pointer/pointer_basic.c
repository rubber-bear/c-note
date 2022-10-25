/*
    每一个变量都有一个内存位置，每一个内存位置都定义了可使用 & 运算符访问的地址，它表示了在内存中的一个地址。
    什么是指针：
      指针也就是内存地址，指针变量是用来存放内存地址的变量，就像其他的变量或者常量一样，在使用指针存储其他变量之前，需要声明
      int    *ip;    // 一个整型的指针 
      double *dp;    //一个 double 型的指针 
      float  *fp;    // 一个浮点型的指针  
      char   *ch;    //一个字符型的指针 
*/

#include <stdio.h>
int main()
{
  int var_runoob = 10;
  int *p; // 定义指针变量
  p = &var_runoob;      // p是一个指针， 存储着变量var_runoob的地址
  printf("var_runoob 的地址： %p \n", p);
  return 0;
}

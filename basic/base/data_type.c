/*
一:基本类型
      整数类型：
          char： 1字节（8位）         -2**7 ～ 2**7 || 0 ～ 255
          unsigned char： 1字节（无符号位）         0～255
          signed char: 1字节（有符号位）       -128~127 
          int: 2字节或者4字节        -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647
          unsigned int: 2字节或者4字节        0 到 65,535 或 0 到 4,294,967,295
          short: 2字节        -32,768 到 32,767
          unsigned short: 2字节        0 - 65,535
          long： 4字节           -2,147,483,648 到 2,147,483,647
          unsigned long 4字节         0 到 4,294,967,295
      浮点类型：
          float: 4字节   1.2E-38 到 3.4E+38        6位有效位数
          double：8字节   2.3E-308 到 1.7E+308      15位有效位
          long double: 16字节      3.4E-4932 到 1.1E+4932    19 位有效位

*/

#include <stdio.h>
#include <float.h>
int main ()
{
  // %lu 为 32 位无符号整数   %E 为以指数形式输出单、双精度实数
  printf("int 存储大小： %lu\n", sizeof(int));
  printf("float 存储的最大字节： %lu \n", sizeof(float));
  printf("float 最小值： %E\n", FLT_MIN);
  printf("float 最大值： %E\n", FLT_MAX);
  printf("精度值： %d\n", FLT_DIG);
  return 0;
}
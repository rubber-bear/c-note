/*
C 变量:程序操作存储区的名称,类型决定了变量存储的大小和布局
定义： type variable_list;  eg: char c, ch;
      int d = 3;

C 中的变量声明：变量声明向编译器保证变量以指定的类型和名称存在
    一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间
    另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它
    extern int i; //声明，不是定义
    int i; //声明，也是定义

*/

#include <stdio.h>
int x;
int y;
int add() 
{
  // 函数内声明变量x和y为外部变量
  extern int x;
  extern int y;
  x = 1;
  y = 2;
  return x + y;
}


int main ()
{
  int result; 
  result = add();
  printf("result = %d \n", result);
  return 0;
}
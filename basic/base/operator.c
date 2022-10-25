/*
算数运算符
    + 、 - 、* 、 /(除，整数部分)、 % （整除后的余数）、 ++ 、 --
关系运算符
    == , !=, >, < , >=, <=
逻辑运算符
    && 、|| 、 ！ （与，或， 非）
位运算符
    作用于位
*/

#include <stdio.h>
/*
int main ()
{
  int a = 13;
  int b = 10;
  int c ;
  printf("add result: %d\n", a + b);
  printf("sub result: %d\n", a - b);
  printf("mul result: %d\n", a * b);
  printf("div result: %d\n", a / b);
  printf("remainder result: %d\n", a % b);
  c = a++; // 赋值后再加1, c 为13， a为14
  printf("a++ result: %d\n", c);
  c = a--; // 赋值后再减1, c为14, a为13
  printf("a-- result: %d\n", c);
}
*/
int main() 
{
  // a++ 和 a-- 的区别
  int c;
  int d;
  int a = 16;
  int b = 18;
  c = a++;
  d = b--;
  printf("先赋值后运算:\n");
  printf("a = %d\n", a);
  printf("c = %d\n", c);
  printf("b = %d\n", b);
  printf("d = %d\n", d);

  printf("先运算后赋值:\n");
  a = 16;
  b = 18;
  c = ++a;
  d = --b;
  printf("a = %d\n", a);
  printf("c = %d\n", c);
  printf("b = %d\n", b);
  printf("d = %d\n", d);
}

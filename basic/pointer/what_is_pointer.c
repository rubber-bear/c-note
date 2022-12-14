/*
scanf
  取得变量的地址传递给一个函数，通过这个地址在那个函数内访问这个变量
    scanf("%d", &i)

  我们需要一个参数能保存别的变量的地址，如何表达能够保存地址的变量？

* 指针： 就是保存地址的变量
  int i;
  int*p = &i
  int *p, q  // p是一个指针， q是一个整数

指针变量
  变量的值是内存的地址
  普通变量的值是实际的值
  指针变量的值是具有实际值的变量的地址

作为参数的指针
  - void f(int *p)
  - 在被调用的时候得到某个变量的地址
     int i= 0; f(&i)
  在函数里面可以通过这个指针访问外面的这个i

访问那个地址上的变量
  - * 是一个单目的运算符，用来访问指针的值所表示的地址上的变量
  - 可以做右值，也可以做左值
    int k = *p
    *p = k + 1

左值之所以叫左值
  是因为出现在赋值号左边额度不是变量，而是值，是表达式计算的结果
    a[0] = 2;
    *p = 3
  是特殊的值，所以叫左值

指针运算符& * 互相反作用
  -   *&yptr -> * (&yptr) -> * (yptr的地址) -> 得到那个地址上的变量 -> yptr
  - & *yptr -> &(*yptr) -> &y -> 得到y的地址， 也就是yptr -> yptr

int i ; scanf("%d", i) 编译不会报错，运行会报错

*/
#include <stdio.h>

void f(int *p);
void g(int k);

int main() {
  int i = 6;
  printf("&i=%p\n", &i);
  f(&i);
  g(i);
  return 0;
}

void f(int *p) {
  printf("p=%p\n", p);
  printf("*p =%d\n", *p);
  *p = 26;
}

void g(int k) {
  printf("k=%d\n", k);
}
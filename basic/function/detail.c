/*
void f(void) - 不需要参数时候也要写void
不能写 void f() 便是函数的参数表未知，并不表示没有参数

逗号运算符？
  调用函数时候的逗号和逗号运算符怎么区分？

  调用函数时的圆括号里的逗号是标点符号，不是运算符 f(a, b) 
  f((a,b)) -》 是运算符

函数里可以定义函数吗
  c语言里不允许函数嵌套定义，可以放一个函数的声明

int i, j, sum(int a, int b) 可以但是不建议
return (i) 错误写法

关于main函数  
  - int main() 也是一个函数，并不是运行的第一条代码
  - int main(void) - 不写参数不会有任何问题
  - main 函数的return 0 需要返回给操作系统
    windows： if error level 1....
    unix Bash: echo $ ?
    Csh: echo $status

*/
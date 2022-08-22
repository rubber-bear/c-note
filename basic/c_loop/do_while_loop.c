/*
do....while 循环是在循环的尾部检查他的条件
*/

# include <stdio.h>
int main() 
{
  // 定义局部变量
  int a = 10;
  /*do 循环执行，在条件被测试之间至少执行一次*/
  do
  {
    /* code */
    printf("a的值是：%d\n", a);
    a++;
  } while (a < 20);

  return 0;
}

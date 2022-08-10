/*
C 常量：固定值，程序执行期间不会改变
定义： 
    使用 #define预处理器
    使用 const关键字
        const type variable = value
        关键字 数据类型 变量名   值      const int val = 5
*/

#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
  const int NUMBER1 = 5;
  const int NUMBER2 = 6;
  int area;
  area = LENGTH * WIDTH;
  printf("value of area: %d", area);
  printf("%c", NEWLINE);
  printf("sum value: %d", NUMBER1 + NUMBER2);
  return 0;
}

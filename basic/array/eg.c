/*
数组示例： 输入数量不确定的【0，9】范围内的整数，统计每一个数字出现的次数，输入-1表示结束

*/
#include <stdio.h>

int main() {
  int x;
  const int number = 10; // 数组大小
  // int count[number]; // 定义数组
  int i;
  int count[number] = {0};
  // for (i = 0; i < number; i++) {
  //   count[i] = 0;
  // }
  scanf("%d", &x);
  while (x != -1) {
    if (x >=0 && x<=9) {
      count[x]++;
    }
    scanf("%d", &x);
  }
  for (i = 0; i < number; i++) {
    printf("%d: %d\n", i, count[i]);
  }
}
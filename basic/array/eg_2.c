/*
数组运算
  在一组给定的数据中，如何找出某个数据是否存在

eg:
  找出key在数组a中的位置
  @param key：要寻找的数字
  @param a 要寻找的数组
  @param length 数组a的长度
  @return 如果找到，返回其在a中的位置； 如果找不到返回-1

数组的集成初始化
 - int a[] = {2, 4, 5, 6, 7, 8, 9, 34, 23, 12, 3, 45, 67} 
   数组的大小编译器会给确定

 - const int number = 10; // 数组大小
  int count[number] = {0}; 将数组的值全部初始化为0

 - int a[10] = {
    [0] = 2, [2]= 3, 6 
  }
  用[n] 在初始化数据中给出定位
  没有定位的数据接在前面的位置后面
  其他位置的值补零
  也可以不给出数组的大小，让编译器啊算
  特别适合初始数据稀疏的数组
*/ 

#include <stdio.h>

int search(int key, int a[], int length);
int main() {
  // int a[] = {2, 4, 5, 6, 7, 8, 9, 34, 23, 12, 3, 45, 67}; // 数组的集成初始化
  int a[10] = {[1] = 2, 4, [5] = 6};
  {
    int i;
    for (i = 0; i < 10; i++) {
      printf("%d\t", a[i]);
    }
  }
  // int x;
  // int loc;
  // printf("请输入一个数字：");
  // scanf("%d", &x);
  // loc = search(x, a, sizeof(a) / sizeof(a[0]));
  // if (loc != -1)
  // {
  //   printf("%d在第%d的位置上\n", x, loc);
  // } else {
  //   printf("%d不存在\n", x);
  // }

  return 0;
}

int search(int key, int a[], int length)
{
  int i;
  int ret = -1;
  for (i = 0; i < length; i++)
  {
    if (a[i] == key) {
      ret = i;
      break;
    }
  }
  return ret;
}

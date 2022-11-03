/*
指针的使用， 指针有什么用呢
  场景-: 交换两个变量的值
  场景二：函数返回多个值，某些值就只能通过指针返回
    传入的参数实际上是需要保存带回的结果的变量
  场景3:
    函数返回运算的状态，结果通过指针返回
    常用的套路是让函数返回特殊的不属于有效范围内的值来表示出错
      -1 或 0 （在文件操作会看到大量的例子）
    但是放任何数值都是有效的可能结果时，就得分开返回

指针最常见的错误：
  定义了指针变量，还没有指向任何变量，就开始使用指针
*/


# include <stdio.h>

void swap(int *pa, int *pb);
void minmax(int a[], int len, int *min, int *max);
int divide(int a, int b, int *result); // 如果除法成功，返回1，否则，返回0

int main() {
  // 场景1
  // int a = 5;
  // int b = 6;
  // swap(&a, &b);
  // printf("a = %d, b= %d\n", a, b);

  // 场景2:
  // int a[] = {1, 2, 3,4,5,6,7,8,12,14,15,18,21,23,};
  // int min, max;
  // minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
  // printf("min=%d, max = %d\n", min, max);

  // 场景3:
  int a = 5;
  int b = 2;
  int c;
  if (divide(a,b,&c)) {
    printf("%d/%d = %d\n", a, b, c);
  }

  return 0; 
}

void swap(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
}

void minmax(int a[], int len, int *min, int *max) {
  int i;
  *min = *max = a[0];
  for (i = 0; i < len; i++) {
    if (a[i] < *min) {
      *min = a[i];
    }
    if (a[i] > *max) {
      *max = a[i];
    }
  }
}

int divide(int a, int b, int *result) {
  int ret = 1;
  if (b == 0) {
    ret = 0;
  } else {
    *result = a / b;
  }
  return ret;
}
/*
c的编译器自上而下的顺序分析你的代码， 被调用的函数需要写在调用前

*/
# include <stdio.h>

int main()
{
  sum(23, 45);
  return 0;
}

void sum (int begin, int end) {
  int i;
  int sum = 0;
  for (i = begin; i <= end; i++) {
    sum += 1;
  }
  printf("%d到%d的和是%d\n", begin, end, sum);
}





/*
switch语句
  一个 switch 语句允许测试一个变量等于多个值时的情况。每个值称为一个 case，且被测试的变量会对每个 switch case 进行检查。
*/

#include <stdio.h>
int main() 
{
  char grade;
  scanf("%c", &grade);
  switch (grade)
  {
    case 'A':
      printf("very goog! \n");
    case 'B':
    case 'C':
      printf("good! \n");
      break;
    case 'D':
      printf("pass! \n");
      break;
    default:
      printf("no pass \n");
    }
  printf("您的成绩是:%c \n", grade);
  return 0;
}
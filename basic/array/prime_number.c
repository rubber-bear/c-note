/*
 数组的例子：素数
 素数： 大于1 的整数中，只能被1和这个数本身整除的数
*/

#include <stdio.h>
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);


int main(void)
{
  const int number = 100;
  int prime[number] = {2};
  int count = 1;
  int i = 3;
  while (count < number) {
    if (isPrime(i, prime, count)) {
      prime[count++] = i;
    }
    i++;
  }
  for (i = 0; i < number; i++) {
    printf("%d\n", prime[i]);
  }
  return 0;
}


int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
  int ret = 1;
  int i;
  for (i = 0; i < numberOfKnownPrimes; i++) {
    if (x % knownPrimes[i] == 0) {
      ret = 0;
      break;
    }
  }
  return ret;
}

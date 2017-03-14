#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 5 % 7;
  //%运算不可以计算小数，只能是整数
  printf("%d\n", a);
  return 0;
}

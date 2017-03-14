#include <stdio.h>

int main(int argc, char const *argv[]) {
  char buffer[100];
  int i = 0;

  i = sprintf(buffer, "Hello %s\n", "world");
  //sprintf函数的意义是通过格式化字符串输出到buffer变量中
  printf("%d %s\n", i , buffer);
  return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]){

  char str[50 = "Hello world!!!";
  int len = 0, len_2 = 0;

  len = strlen(str);
  printf("strlen = %d\n", len);

  len_2 = sizeof(str);
  printf("sizeof = %d\n", len_2);
  return 0;
}

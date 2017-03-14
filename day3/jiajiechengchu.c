#include <stdio.h>

int main(int argc, const char * argv[]){
  int i = 5, j = 2;
  int result = 0;
  //printf("%d\n", argc);
  //printf("%s\n", argv[1]);
  if(argc == 2){
    if(*argv[1] == '+'){
      result = i + j;
    }else if(*argv[1] == '-'){
      result = i - j;
    }else if(*argv[1] == '*'){
      result = i * j;
    }else if(*argv[1] == '/'){
      result = i / j;
    }else if(*argv[1] == '%'){
      result = i % j;
    }
  }else
    printf("%s\n", "参数错误");
  printf("%d\n", result);
  return 0;
}

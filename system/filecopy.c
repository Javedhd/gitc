#include <stdio.h>

int main(int argc, const char * argv[]){

  FILE * in;
  FILE * out;
  char buf[100];

  if(3 == argc){
    in = fopen(argv[1],"r");
    if(NULL == in)
      printf("%s\n", "文件打开失败!!!");
    out = fopen(argv[2], "w");
    while (NULL != fgets(buf, 100, in)) {
      fputs(buf, out);
    }

    fclose(in);
    fclose(out);
  }

  return 0;
}

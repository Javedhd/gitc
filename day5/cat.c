#include <stdio.h>

int main(int argc, const char * argv[]){
  char buf[100];
  FILE * fp;

  if(2 == argc){
    fp = fopen(argv[1], "r");
    if(NULL != fp){
        while(NULL != fgets(buf, 100, fp)){
          printf("%s", buf);
        }
    }
  }
  printf("\n");

  return 0;
}

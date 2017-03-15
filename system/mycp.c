#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){

  char cmd[100];

  if(3 == argc){
    sprintf(cmd, "cp %s %s", argv[1], argv[2]);
    printf("%s\n", cmd);
    system(cmd);
  }else{
    printf("%s\n", "command error!!!");
  }

  return 0;
}

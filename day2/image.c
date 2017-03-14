#include <stdio.h>
#include <string.h>

int main(void){
  printf("Content type: text/html\n\n");
  printf("<img src = \"/usr/lib/cgi-bin/201816z4zvp3zov8vtpp5g.jpg\" width = \"100\" height = \"100\">");
  fflush(stdout);
  return 0;
}

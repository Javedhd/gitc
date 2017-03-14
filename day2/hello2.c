#include <stdio.h>
#include <string.h>
int main(void){
  printf("Content type: text/html\n\n");
  printf("<html>\n");
  printf("<head>\n");
  printf("<title>Hello world!!!</title>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1>h1</h1>\n");
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}

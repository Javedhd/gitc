#include <stdio.h>
#include <string.h>

void makeHtml(char * dest, char tag[], char context[]){
  char a[] = "<";
  char b[] = "</";
  char c[] = ">";

  strcat(dest, a);
  strcat(dest, tag);
  strcat(dest, c);
  strcat(dest, context);
  strcat(dest, b);
  strcat(dest, tag);
  strcat(dest, c);
  printf("%s\n", dest);
}

int main(void){
  printf("Content type: text/html\n\n");
  printf("<html>\n");
  printf("<head>\n");

  char dest[100];
  char tag[] = "title";
  char context[] = "Hello world";
  makeHtml(dest, tag, context);

  printf("</head>\n");
  printf("<body style = \"background-color:green\">\n");
  printf("<h1>Hello world!!!</h1>\n");
  printf("<h2>Hello world!!!</h2>\n");
  printf("<h3>Hello world!!!</h3>\n");
  printf("<h4>Hello world!!!</h4>\n");
  printf("<h5>Hello world!!!</h5>\n");
  printf("<h6>Hello world!!!</h6>\n");
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}

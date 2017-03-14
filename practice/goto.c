#include <stdio.h>

int main(void){

  int c;
  scanf("%d", &c);

  if(c > 0) goto a;
  else goto b;

  a:
    printf("%c\n", 'a');
  b:
    printf("%c\n", 'b');

  return 0;
}

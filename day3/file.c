#include <stdio.h>

int main(void){
  FILE * fp = fopen("test","w+");
  char a[] = "I have a dream";
  int i = fputs(a, fp);
  printf("%d\n", i);
  rewind(fp);
  for(char a = getc(fp); a != EOF; a = getc(fp)){
        printf("%c", a);
  }
  printf("\n");
  return 0;
}

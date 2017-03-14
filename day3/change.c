#include <stdio.h>
void swap(int *, int *);
int main(void){
  int a = 10;
  int b = 20;
  printf("a = %d\t b = %d\n", a, b);
  swap(&a, &b);
  printf("a = %d\t b = %d\n", a, b);
  return 0;
}

void swap(int *p, int *q){
  *p ^= *q;
  *q ^= *p;
  *p ^= *q;
}

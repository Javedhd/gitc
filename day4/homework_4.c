#include <stdio.h>

double a(int n){
  double s = 1.0, tmp = 2.0;
  int flag = 1;
  while(tmp <= n){
    if(flag){
      s = s - 1.0/tmp;
      tmp += 1.0;
      flag = 0;
    }else{
      s = s + 1.0/tmp;
      tmp += 1.0;
      flag = 1;
    }
  }
  return s;
}
int main(void){
  double result = 0;
  result = a(10);
  printf("%f\n", result);
  return 0;
}

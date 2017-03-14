#include <stdio.h>

int main(void){
  int mm, dd, yy;

  printf("Enter date (mm/dd/yy):");
  scanf("%d /%d /%d", mm, dd, yy);
  printf("\n");

  printf("Dated this %d", mm);
  switch (mm) {
    case 1: case 21: case 31:
      printf("st");
      break;
    case 2: case 22:
      printf("nd");
      break;
    case 3: case 23:
      printf("rd");
      break;
    default:
      printf("th");
      break;
  }
  switch (month) {
    case 1:
  }
  
  return 0;

}

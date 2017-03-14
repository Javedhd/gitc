#include <stdio.h>
//计算字符串的长度
int mystrlen(char * str){
  int count = 0;
  if(str != NULL){
    for(int i = 0; str[i] != '\0'; i++) count += 1;
    return count;
  }else return -1;
}
//复制字符串
void mystrcpy(char * dest, const char * src){
  int i = 0;
  for(i = 0; src[i] != '\0'; i ++)
    dest[i] = src[i];
  dest[i] = '\0';
}
//拼接字符串
void mystrcat(char * dest, char * str_1, char * str_2){
  int i = 0;

  for(i = 0; str_1[i] != '\0'; i++)
    dest[i] = str_1[i];

  for(int j = 0; str_2[j] != '\0'; i++, j++)
    dest[i] = str_2[j];
  dest[i] = '\0';
}
//比较字符串是否相同
int mystrcmp(char * str_1, char * str_2){
  int i = 0;
  for(i = 0; str_1[i] != '\0' && str_2[i] != '\0'; i++){
      if(str_1[i] - str_2[i] != 0){
        return str_1[i] - str_2[i];
      }
  }
  if(str_1[i] == '\0' || str_2[i] != '\0'){
    return 0 - str_2[i];
  }
  if(str_1[i] != '\0' || str_2[i] == '\0'){
    return str_1[i];
  }
  return 0;
}
//主函数
int main(void) {
  char str[30] = "Hello world!!!";
  char desc[50];

  printf("count = %d\n", mystrlen(str));

  mystrcpy(desc, str);
  printf("copy later: %s\n", desc);

  char str_1[] = "Hello";
  char str_2[] = "Hello";
  char  result[100];
  mystrcat(result, str_1, str_2);
  printf("cat later: %s\n", result);

  printf("%d\n", mystrcmp(str_1, str_2));
}

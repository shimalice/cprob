// prob12
#include <stdio.h>
#include <stdlib.h>
int main(){
  char* str = (char *)malloc(sizeof(char)*100);
  char* p = str;
  printf("100文字以内の文字列を入力してください: ");
  scanf("%s", str);
  while (*p != '\0') {
    printf("%c", *p);
    p++;
  }
  printf("\n");
  while (p >= str) {
    printf("%c", *p);
    p--;
  }
  printf("\n");
}

// h6
#include <stdio.h>
#include <stdlib.h>
void myscanf(char* str) {
  while (1) {
    char c = getc(stdin);
    if (c == '\n') {
      *str = '\0';
      break;
    }
    *str = c;
    str++;
  }
}
int main(){
  // char str[] = "";
  char str[0];
  // 文字列(char型の配列)は先頭のアドレスを表すポインタ
  myscanf(str);
  // 9文字入れるとsegmentation error
  printf("%s\n", str);
}

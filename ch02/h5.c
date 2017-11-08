// h5
#include <stdio.h>
#include <stdlib.h>
void myprintf(char* str) {
  while (*str != '\0') {
    putc(*str, stdout);
    str++;
  }
}
int main(){
  char str[] = "Hello, World!";
  // 文字列(char型の配列)は先頭のアドレスを表すポインタ
  myprintf(str);
}

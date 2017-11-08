// h6
#include <stdio.h>
#include <stdlib.h>
void myscanf(char* str) {
  while (1) {
    char c = getc(stdin);
    if (c == '\n') break;
    *str = c;
    str++;
  }
}
int main(){
  char* str;
  myscanf(str);
  while (*str != '\0') {
    printf("%c", *str);
    str++;
  }
}

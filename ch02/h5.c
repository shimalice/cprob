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
  char* str = "Hello, World!";
  myprintf(str);
}

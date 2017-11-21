// h12
#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;
  int c;
  int count = 0;

  fp = fopen("english.txt", "r");

  if(fp == NULL){
    printf("file could not be opened.\n");
  }

  while(1) {
    if((c = getc(fp)) != -1){
      count++;
    };
    if(feof(fp)){
      break;
    }
    if(ferror(fp)){
      printf("stream error.\n");
      break;
    }
    putc(c, stdout);
  }
  printf("文字数は%d\n", count);
}

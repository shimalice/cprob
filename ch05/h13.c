// h13
#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp, *fout;
  int c;
  int count = 0;

  fp = fopen("goods.txt", "r");
  fout = fopen("goods2.txt", "w");

  if(fp == NULL){
    printf("file could not be opened.\n");
  }

  while(1) {
    c = getc(fp);
    if(feof(fp)){
      break;
    }
    if(ferror(fp)){
      printf("stream error.\n");
      break;
    }
    putc(c, fout);
  }
}

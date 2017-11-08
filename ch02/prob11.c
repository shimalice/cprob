// prob11
#include <stdio.h>
#include <stdlib.h>
int main(){
  char* p = (char *)malloc(sizeof(char)*10);
  char* q = p;
  char* s = (char *)malloc(sizeof(char)*3);
  printf("文字を10個入力してください．一つ入力するごと改行を押してください．\n");
  for (int count1 = 0; count1 < 10; count1++) {
    scanf("%s", s);
    *p = *s;
    p++;
  }
  p = q;
  printf("中身は以下の通りです．\n");
  for (int count2 = 0; count2 < 10; count2++) {
    /* code */
    printf("文字:%c アドレス:%p\n", *p, p);
    p++;
  }
}

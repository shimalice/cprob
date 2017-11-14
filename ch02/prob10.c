// prob10
#include <stdio.h>
#include <stdlib.h>
int main(){
  int* p = (int *)malloc(sizeof(int)*10);
  int* q = p;
  printf("整数値を10個入力してください．一つ入力するごと改行を押してください．\n");
  for (int count1 = 0; count1 < 10; count1++) {
    scanf("%d", p);
    p++;
  }
  p = q;
  printf("中身は以下の通りです．\n");
  for (int count2 = 0; count2 < 10; count2++) {
    printf("値:%d アドレス:%p\n", *p, p);
    p++;
  }
}

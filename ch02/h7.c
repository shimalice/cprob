// h7
#include <stdio.h>
#include <stdlib.h>
int main(){
  // 領域の確保
  int size_m = 3;
  int size_n = 4;
  // ポインタの領域の確保
  int** p = (int**)malloc(sizeof(int*)*size_m);
  int** q = p;
  // int** r = q;
  for (int i = 0; i < size_m; i++) {
    *p = (int*)malloc(sizeof(int)*size_n);
    (*p)++;
  }
  p = q;
  // データの格納
  for (int i = 0; i < size_m; i++) {
    *p = *q;
    for (int j = 0; j < size_n; j++) {
      scanf("%d", *p);
      (*p)++;
    }
    p++;
    printf("%d\n", **p);
    printf("%p\n", p);
    // (*q)++;
  }
  p = q;
  // データの表示
  for (int i = 0; i < size_m; i++) {
    *p = *q;
    for (int j = 0; j < size_n; j++) {
      printf("%d ", **p);
      (*p)++;
    }
    printf("%p\n", p);
    *p = *q;
    p++;
    // (*q)++;
  }
}

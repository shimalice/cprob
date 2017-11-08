// prob13
#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y) {
  int i = *x;
  *x = *y;
  *y = i;
}
int main(){
  int* x = (int *)malloc(sizeof(int));
  int* y = (int *)malloc(sizeof(int));
  printf("二つの整数値を入力してください：\n");
  scanf("%d", x);
  scanf("%d", y);
  printf("変数xの値は%d，変数yの値は%dです．\n", *x, *y);
  swap(x, y);
  printf("swap()を呼び出した後の変数xの値は%d，変数yの値は%dです．\n", *x, *y);

}

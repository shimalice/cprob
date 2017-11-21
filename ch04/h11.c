// h11
#include <stdio.h>
#define PI 3.141592653

int main() {
  int radius;
  printf("半径を入力してください\n");
  scanf("%d", &radius);
  printf("円の面積は%lfです\n", radius * radius * PI);
}

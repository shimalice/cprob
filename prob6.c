// prob6
#include <stdio.h>

int getSmallestFactor(int a) {
  int i = 2;
  while (i <= a) {
    if (a % i == 0) {
      return i;
    }
    i++;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int input, factor;
  printf("Type in a number: ");
  scanf("%d", &input);
  while (1) {
    factor = getSmallestFactor(input);
    if (factor == 0) break;
    printf("%d*", factor);
    input = input / factor;
  }
}

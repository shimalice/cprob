// prob6
#include <stdio.h>

int getSmallestFactor(int a) {
  int i = 2;
  while (i*i <= a) {
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
  if (input == 1) { printf("1 is not a prime number.\n"); return 0;}
  factor = getSmallestFactor(input);
  if (factor > 0) {
    printf("%d is not a prime number. It can be divided by divided by %d.\n", input, factor);
  } else {
    printf("%d is a prime number.\n", input);
  }
}

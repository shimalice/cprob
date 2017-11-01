// prob7
#include <stdio.h>

int recursion(int a) {
  if (a < 0) {
    return 0;
  } else if (a == 0) {
    return 1;
  } else {
    return a * recursion(a-1);
  }
}

int main() {
  int input, res;
  scanf("%d\n", &input);
  res = recursion(input);
  printf("the recursion of 1 to %d is %d.\n", input, res);
}

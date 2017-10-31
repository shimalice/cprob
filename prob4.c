// prob4
#include <stdio.h>
int main(){
  int stdid1;
  int stdid2;
  printf("First integer?\n");
  scanf("%d", &stdid1);
  printf("Second integer?\n");
  scanf("%d", &stdid2);
  int stdid_sum = stdid1 + stdid2;
  printf("%d+%d=%d\n", stdid1, stdid2, stdid_sum);
}

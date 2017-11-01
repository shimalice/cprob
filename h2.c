// h2: 発展課題2
#include <stdio.h>

// power: べき乗計算関数
int power(int a, int i) {
  double power = 1;
  int counter = 0;
  while (counter < i) {
    power *= a;
    counter ++;
  }
  return power;
}

int main(){
    int i = 0;
    double arctan1 = 0;
    double d;
    while(i < 10000){
      arctan1 += (double)power(-1,i) / (i*2 + 1);
      if(i % 100 == 0){
        printf("pi = %f\n", arctan1 * 4);
      }
      i++;
    }
}

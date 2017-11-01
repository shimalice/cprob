// h4: 発展課題4 πの近似値を求める
/*
バーゼル問題:
平方数の逆数全ての和はいくつか
*/
#include <stdio.h>
#include <math.h>

// zeta: zeta関数
double zeta(int s) {
  double zeta_value = 0;
  int i = 1;
  int n = 1000000;
  while(i < n){
    zeta_value += 1 / pow(i, s);
    i ++;
  }
  return zeta_value;
}

// pi: πの近似値を求める
double pi() {
  double zeta_value = zeta(2);
  double pi_value;
  pi_value = sqrt(zeta_value * 6);
  return pi_value;
}

int main() {
  double pi_appr = pi();
  // double zeta_value = zeta(2);
  printf("π is %f.\n", pi_appr);
  // printf("zeta(2) is %f.\n", zeta(2));
}

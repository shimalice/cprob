// h3: 発展課題3
#include <stdio.h>
#include <math.h>
// recursion: 階乗計算関数
int recursion(int a) {
  if (a < 0) {
    return 0;
  } else if (a == 0) {
    return 1;
  } else {
    return a * recursion(a-1);
  }
}

// mysin: sin関数
double mysin(double rad) {
  int i = 0;
  double sin_value = 0;
  while(i < 6){
    int k = 2 * i + 1;
    sin_value += pow(-1, i) * pow(rad, k) / recursion(k);
    i ++;
  }
  return sin_value;
}

// mycos: cos関数
double mycos(double rad) {
  int i = 0;
  double cos_value = 0;
  while(i < 6){
    int k = 2 * i;
    cos_value += pow(-1, i) * pow(rad, k) / recursion(k);
    i ++;
  }
  return cos_value;
}
int main() {
  double rad_30 = 3.14159265389 / 6;
  double rad_45 = 3.14159265389 / 4;
  double rad_90 = 3.14159265389 / 2;
  // sin
  printf("sin(π/6) is %f.\n", mysin(rad_30));
  printf("sin(π/4) is %f.\n", mysin(rad_45));
  printf("sin(π/2) is %f.\n", mysin(rad_90));
  // cos
  printf("cos(π/6) is %f.\n", mycos(rad_30));
  printf("cos(π/4) is %f.\n", mycos(rad_45));
  printf("cos(π/2) is %f.\n", mycos(rad_90));
}

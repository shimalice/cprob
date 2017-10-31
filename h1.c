// h1
#include <stdio.h>
#include <math.h>
int main(){
    int i = 0;
    double napier = 0;
    double fact = 1;
    while(i < 10){
      if (i==0) {
        napier += 1;
      } else {
        fact *= i;
        napier += 1 / fact;
        printf("napier = %f\n", napier);
      }
      i++;
    }
}

// prob7
#include <stdio.h>
int main(){
    int n = 5;
    int res = recursion(n);
    printf("the recursion of 1 to %d is %d", n, res);
}

int recursion(int a){
  int re;
  if(a <= 0){
    return 0;
  }else{
    printf("%d\n", a);
    re *= a;
  }
  return re;
}

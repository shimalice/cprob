#include <stdio.h>
#include <stdlib.h>

typedef struct goods {
  char id[10];
  char name[40];
  int price;
} goodsData;

int main() {
  goodsData goods[100];
  int i = 0;
  while ( scanf("%s %s %d", goods[i].id, goods[i].name, &(goods[i].price)) != EOF) {
    i++;
  }

  for (int n = 0; n < 3; n++) {
    printf("商品コード：%s\n", goods[n].id);
    printf("商品名：%s\n", goods[n].name);
    printf("値段：%d\n\n", goods[n].price);
  }
}

// prob17
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct client {
  char name[50];
  char address[80];
  struct client* next;
} clientData;

int main(){
  clientData *a, *start;

  char name[5][16] = {"moto", "mototo", "motototo", "mototototo", "motototototo"};
  char address[5][10] = {"jp", "us", "uk", "de", "fr"};

  for (int i = 0; i < 6; i++) {
    if (i==0) {
      a = (clientData*)malloc(sizeof(clientData));
      start = a;
    } else {
      a->next = (clientData*)malloc(sizeof(clientData));
      a = a->next;
    }
    strcpy(a->name, name[i]);
    strcpy(a->address, address[i]);
  }

  a = start;

  while (a->next != '\0') {
    printf("%s\t%s\n", a->name, a->address);
    a = a->next;
  }
}

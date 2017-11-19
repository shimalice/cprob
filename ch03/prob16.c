// prob16
#include <stdio.h>
#include <stdlib.h>
typedef struct person {
	char name[30];
	char address[40];
	int birthyear;
} personData;

typedef struct company {
  personData ceo;
  personData employees[100];
} companyData;

int main(){
  companyData  *companies, *addressbook;
  companies = (companyData*)malloc(sizeof(companyData)*3);
  addressbook = companies;
  for(int i = 0; i < 3; i++){
    personData *ceo;
    ceo = (personData*)malloc(sizeof(personData));
    printf("What is the name of ceo of the company%d?\n", i);
    scanf("%s", ceo->name);
    printf("What is the address of %s?\n", ceo->name);
    scanf("%s", ceo->address);
    companies->ceo = *ceo;
    personData *employees;
    employees = (personData*)malloc(sizeof(personData)*3);
    for(int j = 0; j < 3; j++){
      printf("What is the employee%d's name of the companie%d ?\n", j, i);
      scanf("%s", employees->name);
      companies->employees[j] = *employees;
      employees++;
    }
    companies++;
  }


  printf("\n");
  companies = addressbook;
  for(int i = 0; i < 3; i++){
    printf("The ceo of the company%d: %s, ", i, companies->ceo.name);
    printf("lives in %s\n", companies->ceo.address);
    for(int j = 0; j < 3; j++){
      printf("the employee%d's name of the companie%d: %s \n", j, i, companies->employees[j].name);
    }
    companies++;
  }
}

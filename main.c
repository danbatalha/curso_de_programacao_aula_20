#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int idade;

  printf("Qual é a sua idade? ");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("Você é maior de idade.\n");
  }
  return 0;
}
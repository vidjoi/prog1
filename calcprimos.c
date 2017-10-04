#include <stdio.h>
#include <stdlib.h>




int main() {
    int tNumb;
int menu = 1;
  printf("Digite um numero inteiro e positivo: ");
  scanf("%d", &tNumb);

  int i;
  int pripoint = 0;


  for (i = 1; i <= tNumb; i++) {
    if (tNumb % i == 0) {
    pripoint++;
    }
  }

  if (pripoint == 2)
  {
    printf("Numero primo", tNumb);

  }
  else
  {
    printf("Nao primo", tNumb);

  }


  return 0;
}

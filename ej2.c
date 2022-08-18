#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int num;
  int cont = 0;
  while(scanf("%d", &num) != 0) {
    cont += num;
  }
  printf("Suma: %d\n", cont);
  return 0;
}

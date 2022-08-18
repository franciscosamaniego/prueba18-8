#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  int cont = 0;
  while (scanf("%d", &n) != EOF) {
    cont += n;
  }
  printf("Suma: %d\n", cont);
  return 0;
}

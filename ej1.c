#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int cont = 0;
  int num;
  for(int i = 0; i < n; i++) {
    scanf("%d", &num);
    cont += num;
  }
  printf("Suma: %d\n", cont);
  return 0;
}

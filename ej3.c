#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  int cont = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int r = rand() % 100;
    printf("%d ", r);
    cont += r;
  }
  printf("\n");
  printf("%d\n", cont);
  return 0;
}

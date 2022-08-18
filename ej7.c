#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a;
  int b;
  int n;
  printf("Elija un valor para a\n");
  scanf("%d", &a);
  printf("Elija un valor para b\n");
  scanf("%d", &b);
  printf("Elijala cantidad de veces que se repite\n");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int r = (rand() % b - a - 1) + a + 2;
    printf("%d ", r);
  }
  printf("\n");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n;
  int r = rand() % 1000 + 1;
  for(int i = 0; i < 5; i++) {
    printf("Elija un numero entre 1 y 1000\n");
    scanf("%d", &n);
    printf("%d\n", r);
    if(n > 1000 || n < 1)  printf("Ingrese un numero entre 1 y 1000\n");
    if(n < r)  printf("Elija un numero mayor\n");
    if(n > r)  printf("Elija un numero menor\n");
    if(n == r)  {
      printf("Ganaste\n");
      break;
    }
  }

  return 0;
}

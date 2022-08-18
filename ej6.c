#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int n;
  int cant = 0;
  int i = 0;
  int cont[100];
  while((scanf("%d", &n)) != EOF) {
    if(n >= a && n <= b)   {
      cont[i] = n;
      cant++;
      i++;
    }
  }
  for(int i = 0; i < cant; i++) {
    printf("%d ", cont[i]);
  }
  printf("\n");
  return 0;
}

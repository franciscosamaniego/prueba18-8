#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char car;
  int c;
  int ca = 0;
  while((c = fgetc(car)) != EOF) {
    ca++;
  }
  return 0;
}

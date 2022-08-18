#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  int l = 0;
  fp = fopen("note.txt", "r");
  int c;
  while((c = fgetc(fp)) != EOF) {
    if(c == '\n')  l++;
  }
  printf("Lineas %d\n", l);
  return 0;
}

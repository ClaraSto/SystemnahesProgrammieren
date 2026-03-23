#include <stdio.h>

int main() {
  int arraylength = 10;

  int multtable[arraylength][arraylength];

  for (int i = 0; i < arraylength; i++) {
    for (int j = 0; j < arraylength; j++) {
      multtable[i][j] = ((i+1) * (j+1));
      printf("%d, ", multtable[i][j]);
    }
    printf("\n");
  }

  return (0);
}
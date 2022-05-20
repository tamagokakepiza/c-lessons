#include <stdio.h>

int main (void) {
  int number;
  scanf("%d", &number);
  if (number < 10) printf("10未満です");
  if (number > 10) printf("10より大きいです");
  if (number == 10) printf("10と同じです");
  return 0;
}
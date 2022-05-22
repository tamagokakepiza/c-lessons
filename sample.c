#include <stdio.h>

int main (void) {
  int number;
  scanf ("%d", &number);
  if (number == 10)
    printf("10と同じです");
  else
    printf("10ではありません");
  return 0;
}
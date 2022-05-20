#include <stdio.h>

int main (void) {
  int number;
  scanf ("%d", &number);
  if (number == 10) {
    printf("10と同じです\n");
    printf("正しく入力できました\n");
  };
  return 0;
}
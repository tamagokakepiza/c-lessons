#include <stdio.h>
int calculate (int money);
int main (void) {
  calculate(1000);
  return 0;
}

int calculate (int money){
  printf("%f", money * 1.1);
  return 0;
}
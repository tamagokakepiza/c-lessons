#include <stdio.h>

int main (void) {
  int number;
  scanf("%d" ,&number);
  switch (number){
  case 1:
    printf("ハリー");
    break;
  case 2:
    printf("ロン");
    break;
  case 3:
    printf("ハーマイオニー");
    break;
  case 4:
    printf("マルファイ");
    break;
  default:
    printf("正しい番号を入力してください");
    break;
  }
  return 0;
}
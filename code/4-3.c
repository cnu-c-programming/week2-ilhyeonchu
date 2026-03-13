#include <stdio.h>

int main() {
  int input;

  scanf("%d", &input);

  for (int i = 2; i < input; i++) {
    if (input % i == 0) {
      printf("false\n");
      return 0;
    }
  }

  printf("true\n");

  return 0;
}

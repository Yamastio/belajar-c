#include <stdio.h>

int main() {
  int pages[] = {10, 20, 30};
  int total = 0;

  for (int i = 0; i < 3; i ++) {
    total = total + pages[i]; // 0 + 10, 10 + 20, 30 + 30
    printf("%d\n", total); // 10, 30, 60
  }

  return 0;
}

#include <stdio.h>

int main() {
  char choice = '2';

  switch (choice) {
  case '1':
    printf("New request\n");
    break;
  case '2':
    printf("View total\n");
    break;
  default:
    printf("Unknown option\n");
    break;
  }
  return 0;
}

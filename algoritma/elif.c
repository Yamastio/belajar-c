#include "stdio.h"

int main() {
  char choice = '5';

  if (choice == '1') {
    printf("New Request\n");
  } else if (choice == '2') {
    printf("View total\n");
  } else {
    printf("Unknown option\n");
  }

  return 0;
}

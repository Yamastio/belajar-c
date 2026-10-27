#include "stdio.h"

void show_total(int total) { // procedure dengan nama show_total
  printf("Total payable: Rp %d\n", total);
}

int main() {
  show_total(10000);
  show_total(5000);
  return 0;
}

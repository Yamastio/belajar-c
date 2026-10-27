#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isMember = true;
  int totalCost = 10000;
  int payable;
  const char *nilai = "";

  if (isMember) {
    payable = totalCost * 0.80;
    if (payable == 8000) {
      nilai = "Nilai yang kamu masukan 1 sih";
    }
  } else {
    payable = totalCost;
  }

  printf("TotalCost: %d\n", payable);
  printf("TotalCost: %d\n", totalCost);
  printf("%s\n", nilai);
  return 0;
}

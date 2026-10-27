#include <stdbool.h>
#include <stdio.h>

// kalau member dan beli di atas/sama dengan 20 dapat diskon 20%
int main() {
  int pages = 20;
  bool isMember = false;
  int base_cost = pages * 200; // 20 * 200 = 4000
  int discount;
  int payable;

  if (isMember && pages >= 20) {
    discount = pages * 40;  // 20 * 40 = 800
  } else {
    discount = 0;
  }

  payable = base_cost - discount; // 4000 - 800 = 3200

  printf("%d\n", payable);

  return 0;
}

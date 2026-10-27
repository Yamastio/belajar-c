#include <stdbool.h>
#include <stdio.h>

int calculate_payable(int pages, bool isMember) {
  int base_cost = pages * 200;
  if (isMember && pages >= 20) {
    return printf("Selamat dapat diskon, total harga jadi: %d\n",base_cost - pages * 40);
  }
  return printf("total: %d\n",base_cost);
}

int main() {
  int ammount = calculate_payable(20, true);
  int ammount2 = calculate_payable(10, true);
  int ammount3 = calculate_payable(50, false);
  int ammount4 = calculate_payable(19, true);

  return 0;
}

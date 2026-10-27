#include <stdio.h>

int main() {
  int pages;                   // total halaman
  char isMember;               // y atau n
  int PRICE_PER_PAGE = 200;    // harga satuan
  double DISCOUNT_RATE = 0.20; // diskon
  int totalCost;
  int discount;
  int payable;

  printf("Mau print berapa lembar?: ");
  scanf("%d", &pages); // 1, 2, 3, 4 ...

  printf("Apa kamu punya kartu member?(y/n): ");
  scanf(" %c", &isMember); // y atau n

  totalCost = pages * PRICE_PER_PAGE;

  if ((isMember == 'y') && (pages >= 20)) {
    discount = totalCost * DISCOUNT_RATE;
  } else {
    discount = 0; // tidak keluar dari scope if dan else
  }

  payable = totalCost - discount;
  printf("\n===========\n");
  printf("TotalCost: %d\nDiscount: %d\nPayable: %d\n", totalCost, discount,
         payable);
  printf("\n===========\n");

  return 0;
}
